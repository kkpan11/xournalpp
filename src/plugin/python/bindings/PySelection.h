/*
 * Xournal++
 *
 * Python bindings
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2
 */

#pragma once

class Control;
#include <Python.h>

extern "C"
{

void initselection();

PyObject* newPySelection(PyObject* xournal);

}
