#include <stdlib.h>
#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - function that prints basic info
 * @p: python list
 */
void print_python_list_info(PyObject **p)
{
	int elem;

	printf("[*] Size of the Python List = %lu\n", Py_SIZE(p));
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (elem = 0; elem < Py_SIZE(p); elem++)
		printf("Element %d:%s\n", elem, Py_TYPE(PyList__GetItem(p, eleem))->tp
				}
