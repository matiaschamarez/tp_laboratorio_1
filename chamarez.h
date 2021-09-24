#ifndef CHAMAREZ_H_INCLUDED
#define CHAMAREZ_H_INCLUDED

/** \brief es un menu de opciones para que el usuario pueda elegir la opcion que use la calculadora
 *
 * \return int devuelve un valor numerico
 *
 */
int menuOpciones();

/** \brief suma dos numeros
 *
 * \param a int primer numero a sumar
 * \param b int segundo numero a sumar
 * \return int retorna la suma de los numeros
 *
 */
int suma(int a, int b);

/** \brief resta dos numeros
 *
 * \param a int primer numero a restar
 * \param b int segundo numero a restar
 * \return int retorna la resta de los numeros
 *
 */
int resta(int a, int b);

/** \brief divide dos numeros
 *
 * \param a int es el dividendo
 * \param b int es el divisor
 * \return float retorna el cociente
 *
 */
float division(int a, int b);

/** \brief multiplica dos numeros
 *
 * \param a int primer numero para multiplicar
 * \param b int segundo numero para multiplicar
 * \return int retorna el resultado de la multiplicacion
 *
 */
int multiplicacion(int a, int b);


/** \brief hace el factorial del numero, de manera recursiva
 *
 * \param a int le pasa un entero para hacer el factorial
 * \return int retorna el factorial del numero ingresado
 *
 */
int factorialRescursivo(int a);

#endif // CHAMAREZ_H_INCLUDED
