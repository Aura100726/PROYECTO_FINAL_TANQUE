# PROYECTO_FINAL_TANQUE
Este es será nuestro proyecto final de software. 
Este proyecto corresponde al proyecto final de la asignatura de Software, enfocado en el diseño de un sistema automatizado para el llenado de un tanque a dos niveles.
El sistema permite controlar el nivel del agua mediante sensores que detectan los estados mínimo y máximo, activando o desactivando una bomba de manera automática para mantener un nivel óptimo.
# Objetivo General
Desarrollar un sistema automatizado que controle el llenado de un tanque de agua a través de sensores de nivel, asegurando un funcionamiento eficiente y seguro.

# INTEGRANTES
Juan Sebastián Carvajal  202478547-3744
Juan David moreno jurado 202478559 - 3744
Maicol Stiven Guevara Orrego 202478462 - 3744
Aura Leticia Londoño Román  202478514 -3744

# HISTORIAS DE USUARIO
# HU-01
Nombre: Detección de nivel medio
Descripción: Como desarrolladores, queremos que el sistema emita una alerta cuando el tanque alcance la mitad, para tener control del nivel intermedio de agua.
Valor de negocio: 8
Esfuerzo: 5
Prioridad: Must
# Criterios de Aceptación
Given que el tanque se está llenando,
When el agua alcanza el 50% de su capacidad,
Then el sistema debe emitir una alerta visible para el cliente.
# HU-02
Nombre: Detección de nivel máximo
Descripción: Como desarrolladores, queremos que el sistema emita una alerta cuando el tanque llegue al nivel máximo, para evitar que se rebose.
Valor de negocio: 10
Esfuerzo: 34
Prioridad: Must
# Criterios de Aceptación
Given que el tanque se está llenando,
When el agua alcanza el nivel máximo,
Then el sistema debe emitir una alerta inmediata de nivel máximo alcanzado.
# HU-03
Nombre: Apagado automático de la bomba
Descripción: Como desarrolladores, queremos que la bomba de llenado se detenga automáticamente al llegar al nivel máximo, para prevenir desperdicio de agua y daños en el sistema.
Valor de negocio: 10
Esfuerzo: 55
Prioridad: Must
# Criterios de Aceptación
Given que el tanque llega al nivel máximo,
When la bomba está en funcionamiento,
Then el sistema debe detener automáticamente la bomba de llenado.
# HU-04
Nombre: Visualización de niveles
Descripción: Como desarrolladores, queremos visualizar el nivel de agua en una pantalla en tiempo real, para monitorear el llenado fácilmente.
Valor de negocio: 7
Esfuerzo: 8
Prioridad: Should
# Criterios de Aceptación
Given que el tanque se está llenando o vaciando,
When el usuario consulta la pantalla,
Then debe visualizar el nivel actual del tanque en tiempo real.
# HU-05
Nombre: Notificación remota
Descripción: Como desarrolladores, queremos recibir notificaciones en nuestros celulares cuando el tanque llegue a los niveles definidos, para estar informado a distancia.
Valor de negocio: 9
Esfuerzo: 8
Prioridad: Could
# Criterios de Aceptación
Given que el sistema detecta nivel medio o máximo,
When ocurre el evento,
Then debe enviarse una notificación al celular del cliente registrado.
# HU-06
Nombre: Registro histórico de niveles
Descripción: Como desarrolladores, queremos que el sistema almacene el historial de niveles alcanzados, para analizar patrones de consumo de agua.
Valor de negocio: 3
Esfuerzo: 6
Prioridad: Could
# Criterios de Aceptación
Given que el sistema detecta cambios de nivel,
When se alcanza nivel medio o máximo,
Then debe guardarse un registro con fecha, hora y nivel alcanzado.
# HU-07
Nombre: Configuración de umbrales
Descripción: Como desarrolladores, queremos configurar los valores de nivel medio y máximo, para adaptar el sistema a diferentes tamaños de tanque.
Valor de negocio: 8
Esfuerzo: 9
Prioridad: Should
# Criterios de Aceptación
Given que el administrador accede al sistema,
When modifica los valores de nivel medio o máximo,
Then el sistema debe actualizar esos umbrales y usarlos en las próximas alertas.
# HU-08
Nombre: Prueba de sensores
Descripción: Como desarrolladores, queremos realizar pruebas de funcionamiento de los sensores, para garantizar que detecten correctamente los niveles de agua.
Valor de negocio: 34
Esfuerzo: 7
Prioridad: Must
# Criterios de Aceptación
Given que el técnico ejecuta la función de prueba,
When se inicia la prueba,
Then el sistema debe verificar el estado de los sensores y mostrar si funcionan correctamente.
# HU-09
Nombre: Reporte de fallas
Descripción: Como desarrolladores, queremos recibir una alerta si un sensor falla, para actuar de inmediato y evitar errores en la medición.
Valor de negocio: 8
Esfuerzo: 8
Prioridad: Must
# Criterios de Aceptación
Given que un sensor no envía datos correctos,
When ocurre la falla,
Then el sistema debe generar una alerta de error en pantalla y notificación al cliente.
# HU-10
Nombre: Panel de administración
Descripción: Como desarrolladores, queremos tener un panel donde gestione usuarios y configuraciones, para mantener el control del sistema.
Valor de negocio: 55
Esfuerzo:9
Prioridad: Could}
# Criterios de Aceptación
Given que el administrador inicia sesión,
When accede al panel,
Then debe poder gestionar usuarios, permisos y configuraciones del sistema.
# Definition of Done (DoD)
La funcionalidad que se pidió ya está programada y no tiene errores.
Se hicieron las pruebas pequeñas y todas pasaron bien.
Lo que se hizo cumple con los criterios de aceptación de la historia.
El nuevo código funciona bien cuando se junta con el resto del sistema.
El sistema responde rápido y sin trabarse al usar la nueva función.
Otro compañero del grupo ya revisó el código y lo aprobó.
La documentación de lo que se hizo está actualizada.
Se probó la funcionalidad en el equipo real o en simulador, y anda como debe ser.
Después de agregar lo nuevo, el sistema no da errores graves.
La historia fue mostrada en la revisión del sprint y el profe, además del equipo la aceptó.
Historias Técnicas – Proyecto
# HT-01 – Instalación de sensores
Como equipo de desarrollo, necesitamos instalar y calibrar los sensores de nivel en el tanque, para detectar correctamente los niveles medio y máximo.
# HT-02 – Integración con la bomba
Como equipo de desarrollo, necesitamos conectar el sistema de control con la bomba de agua, para poder detener el llenado automáticamente.
# HT-03 – Configuración de notificaciones
Como equipo de desarrollo, necesitamos implementar el servicio de envío de notificaciones, para avisar al operador en su celular cuando se alcancen los niveles.
# HT-04 – Base de datos de registros
Como equipo de desarrollo, necesitamos diseñar la base de datos para almacenar el historial de niveles, para analizar el consumo de agua.
# HT-05 – Interfaz de monitoreo
Como equipo de desarrollo, necesitamos programar la interfaz gráfica en pantalla, para visualizar en tiempo real el nivel del tanque.

# Diagrama de clases
<img width="582" height="1052" alt="Image" src="https://github.com/user-attachments/assets/029fc013-bb93-431b-a9c8-998ca8f39ede" />

# a continuacion el diagrama de estados 
# Tanque
Tanque de llenado manual de dos niveles, cuando el tanque llegue al nivel medio se va a
activar un sensor ultrasónico que a su ves activara un led que es el avisara que el tanque está al
nivel medio.
Una vez ya paso el nivel medio, se activará un flotador y otro led, el cual avisará que el tanque
se llego al tope, este nivel indicará que al tanque ya no se le puede echar más agua.
# Entradas:
SU: sensor ultrasónico
SF: sensor flotador
# Salidas:
L1: Led de nivel medio
L2: Led de nivel alto
Orden de las entradas y salidas.
SF, SU / L1, L2
# elaboracion de diagrama de casos de uso
<img width="865" height="329" alt="image" src="https://github.com/user-attachments/assets/0724e0b5-3d0e-4eef-b304-883bb5567086" />


# Proyecto: Sistema de Llenado de Tanque a Dos Niveles

El proyecto consiste en automatizar el llenado de un tanque en el hogar
para evitar desperdicio de agua .
Actualmente, la persona que llena el tanque debe estar atenta para evitar
rebosamientos.
Con este sistema:
• El motor se enciende automáticamente cuando el agua está en nivel
bajo.
• El motor se apaga automáticamente al llegar al nivel máximo.
• El sistema emite avisos en nivel medio y máximo.
• Se evitan pérdidas de agua y la necesidad de vigilancia constante.
# Actores
•Operador (mujer del hogar): Supervisa el sistema, puede
configurarlo o activarlo en modo manual.
•Sensor de Nivel Bajo: Detecta cuando el tanque necesita
llenarse.
•Sensor de Nivel Alto: Detecta cuando el tanque está lleno
y ordena detener el llenado.
•Sistema de llenado (bomba/válvula): Ejecuta el llenado
físico del tanque.
# Casos de Uso
Monitorear nivel de agua
1. El operador puede ver si el tanque está en nivel bajo o alto.
Activar llenado automático
1. Cuando el sensor de nivel bajo detecta que el tanque está vacío, enía la señal al sistema
para encender la bomba.v
Detener llenado automático
1. Cuando el sensor de nivel alto detecta tanque lleno, el sistema apaga la bomba.
Generar alarma de error o desborde
1. Si el sistema no logra cerrar válvula o apagar motor, emite alarma de desborde.
<img width="1253" height="672" alt="image" src="https://github.com/user-attachments/assets/031492d0-5e52-4974-a456-b57cc2ec9d8b" />
Especificaciones de Casos de Uso
<img width="808" height="741" alt="Image" src="https://github.com/user-attachments/assets/f06bb1f9-d155-4ffe-a2b9-3267faa0a2a9" />


