**Laboratorio 11 - Análisis Semántico: Conversión implícita int → bool**

Se modificó únicamente el archivo ast.cpp para permitir la conversión automática de valores enteros a booleanos:
- 0 → false
- Cualquier otro entero → true

**Cambios realizados:**
1. Logical::Logical → acepta int en && y ||
2. UnaryExpr::UnaryExpr → acepta ! con operandos int
3. Assign::Assign → permite asignar int a variable bool
4. If/While/DoWhile → validación explícita (rechaza float)

**Pruebas realizadas:**
- Conversión implícita: ACEPTADA
- Uso de float en if: RECHAZADO correctamente
- Asignación bool → int: RECHAZADO correctamente
- Operadores lógicos y condiciones: todo funcionando

**Nota:** El parser original no soporta cláusula else ni declaraciones múltiples (int x, y;).

## Instrucciones de compilación y ejecución
```bash
g++ -std=c++17 *.cpp -o compiler

./compiler testes/test1.cpp      