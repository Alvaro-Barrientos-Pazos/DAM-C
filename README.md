## Repositorio de Álvaro Barrientos Pazos

Ejercicios de Programación en lenguaje C


## Copilador C

~~Copilador TCC (tiny c compiler)~~ Tiene bugazos importantes. Copilaba incorrectamente el ejercicio ud1/EP0132.c.<br />
GCC (GNU Compiler Collection)


## Caracteres UTF-8 en la terminal

### Windows

Para mostrar los caracteres UTF-8 correctamente como ñ o € fue necesario cambiar la consola del visual studio code a powershell y ejecutar un comando:<br />
- Paso 1: Pulsa `F1`
- Paso 2: Selecciona/escribe `Terminal: Select Default Profile`
- Paso 3: Selecciona/escribe `PowerShell`
- Paso 4: Ejecuta el siguiente commando en la terminal:<br /> `[Console]::OutputEncoding = [System.Text.Encoding]::UTF8`

### Linux

La terminal por defecto ya interpreta los caracteres UTF-8.


## Estructura del repositorio

- `bin`: Archivos binarios Ejecutables
- `src`: Contiene el código fuente de los programas
- `lib`: Contiene las librerias
- `.vscode`: Configuracion especificas de VScode


## Configuración de archivos en .vscode/

- `task.json`: Alertas y errores para asimilar las practicas estandar, estas lineas están comentadas por defecto. Nueva ruta para los archivos binarios a la carpeta `bin`.
- `launch.json`: Configuración del `preLaunchTask` y `program` para buscar los ejecutables en la carpeta `bin`.
