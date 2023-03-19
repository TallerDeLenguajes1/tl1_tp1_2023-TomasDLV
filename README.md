# tl1_tp1_2023-TomasDLV
## 2)
### a_
*El archivo .gitignore es un archivo de configuración que se utiliza en los repositorios de Git para especificar qué archivos y directorios deben ser ignorados por Git durante el seguimiento de cambios en el código fuente. Es decir, le dice a Git qué archivos o carpetas no deben ser incluidos en los commits o en el historial de cambios.*

*Es conveniente incluir el archivo .gitignore para evitar que se incluyan archivos o directorios que no son necesarios en el repositorio, lo que puede hacer que el tamaño del repositorio aumente innecesariamente. Además, también puede ayudar a evitar problemas al compartir el código con otros desarrolladores, ya que no se incluirán archivos de configuración, archivos temporales o archivos generados automáticamente, entre otros.*

*El archivo .gitignore se debe crear y configurar antes de hacer el primer commit en el repositorio. Esto se debe a que una vez que se realiza el primer commit, Git comienza a rastrear todos los archivos que están en el repositorio, incluidos los que se quieren ignorar. Entonces, si el archivo .gitignore no se configura correctamente desde el principio, se pueden incluir archivos no deseados en el repositorio.*

*Para configurar el archivo .gitignore, se debe crear un archivo con ese nombre en la raíz del repositorio. Para esto utilizamos el comando "touch .gitignore" dentro de la terminal en la raiz del repositorio. Dentro del archivo, se pueden especificar los nombres de los archivos y directorios que se quieren ignorar, utilizando una sintaxis simple de patrones de expresiones regulares.*
    - Carpeta específica: /folder/
    - Todos los archivos con una extensión específica: *.extension
    - Todos los archivos dentro de una carpeta específica: folder/**
    - Ignorar una carpeta, pero no sus subcarpetas: folder/

3)
    g)Los apartados del punto anterior son iguales ya que La direccion de memoria que almacena el puntero es la direccion de memoria de la variable que se quiere apuntar.
      En el punto 4 obtengo la direccion del espacio de memoria reservado para la variable puntero punt. No es igual a los anteriores, ya que la direccion del puntero es la direccion del espacio de memoria de la variable puntero donde dentro de esa memoria se encuentra contenida la direccion de memoria de la variable, por lo tanto no son lo mismo.