# DEV_2025
Existen 2 versiones distinas del exploit (ninguna funcional):
  - exploit_ret.c : se basa en sobrescribir la dirección de retorno de la pila por la dirección de inicio del payload, donde se ejecutarán varios NOPs y la shellcode.
  - exploit_jmp.c : se basa en sobrescribir la dirección de retorno de la pila por la instrucción de salto relativo indicando un salto hacia atrás, el salto tiene que ser exacto al inicio del shellcode.

Existen 2 versiones del shellcode:
  - shellcode : la versión que se trabajó previamente en clase y más sencilla que ejecuta /bin/sh
  - shellcode_noNull : una versión que evita tener bytes nulos (0x00) para que strcpy no interprete dicho valor como fin de cadena de carácteres.

Además de ello, hay capturas de pantalla de los resultados de cada programa para ver que lo indicado en el informe es verídico.

Se proporciona también el programa vulnerable, con el fin de ver el código modificado para depurar los programas visualizando el buffer post-copia con la función strcpy.
