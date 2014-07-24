#!/bin/bash
PROJECT='pantheon.bestaker'
TARGET_PATH=`pwd`
ENV='dev'

updateDatabase(){
	BACKUP_PATH=`pwd`
	NOW=$(date +"%m_%d_%Y_%T")
	DUMP_FILE=$BACKUP_PATH"/dump_"$NOW
	echo "1 - Descargando fichero $DUMP_FILE..."
	drush @$PROJECT.$ENV sql-dump > $DUMP_FILE
	echo "2 - Descarga completada"
	cd $TARGET_PATH
	echo "3 - Borrando la BD del entorno local..."
	drush sql-drop --y
    echo "4 - Volcando backup a entorno local..."
	drush sql-cli < $DUMP_FILE
	echo "5 - Eliminado fichero backup descargado"
	rm $DUMP_FILE
	echo "Actualización de Base de Datos completada"
	#echo "666 - Desactivando módulos innecesarios en desarrollo...."
	#drush dis securepages cdn memcache varnish expire -y
	drush cc all
	echo "Módulos desactivados, ready to go"
}

syncImages(){
	FILES_PATH=$TARGET_PATH/../sites/default/files/
	echo "Sincronizando files..."
	if [ ! -d "$FILES_PATH" ]; then
	    mkdir $FILES_PATH
	    chmod 777 $FILES_PATH
	fi
	drush rsync @$PROJECT.$ENV:%files/ $FILES_PATH --progress
	echo "Carpeta files sincronizada"
}

pause(){
	echo ""
	read -p "Pulsa cualquier tecla para continuar..."
}

showMenu(){
	clear
	echo "Menu de acciones: "
	echo "1.- Actualizar Base de Datos"
	echo "2.- Sincronizar carpeta files"
	echo "3.- Actualizar Base de Datos y descargar imágenes"
	echo "0.- Salir"
}


while true
do
	showMenu
	read option
	case $option in
		1) clear
		   updateDatabase
		   pause;;
		2) clear
		   syncImages
		   pause;;
		3) clear
		   updateDatabase
		   syncImages
		   pause;;
		0) clear
		   break;;
	esac
done
