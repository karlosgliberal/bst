module.exports = function(grunt) {
  grunt.initConfig({
    less: {
      development: { //nombre de la compilación
        options: {
          compress: true,
          yuicompress: true,
          optimization: 2
        },
        files:  {
            "sites/all/themes/bestaker/css/style.css": "sites/all/themes/bestaker/less/style.less",
        }
      }
    },
    watch: {
      styles: {
        // Which files to watch (all .less files recursively in the less directory)
        files: ['sites/all/themes/bestaker/less/*.less'],
        tasks: ['less'],
        options: {
          spawn: true
        }
      }
    }
  });
 
  grunt.loadNpmTasks('grunt-contrib-less');
  grunt.loadNpmTasks('grunt-contrib-watch'); 
  grunt.registerTask('default', ['watch']);
};

