/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * gmpy2_abs.h                                                             *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Python interface to the GMP, MPFR, and MPC multiple precision           *
 * libraries.                                                              *
 *                                                                         *
 * Copyright 2000 - 2009 Alex Martelli                                     *
 *                                                                         *
 * Copyright 2008 - 2025 Case Van Horsen                                   *
 *                                                                         *
 * This file is part of GMPY2.                                             *
 *                                                                         *
 * GMPY2 is free software: you can redistribute it and/or modify it under  *
 * the terms of the GNU Lesser General Public License as published by the  *
 * Free Software Foundation, either version 3 of the License, or (at your  *
 * option) any later version.                                              *
 *                                                                         *
 * GMPY2 is distributed in the hope that it will be useful, but WITHOUT    *
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or   *
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public    *
 * License for more details.                                               *
 *                                                                         *
 * You should have received a copy of the GNU Lesser General Public        *
 * License along with GMPY2; if not, see <http://www.gnu.org/licenses/>    *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef GMPY2_ABS_H
#define GMPY2_ABS_H

#ifdef __cplusplus
extern "C" {
#endif

/* Public API */

static PyObject * GMPy_Number_Abs(PyObject *x, CTXT_Object *context);

/* Private API */

static PyObject * GMPy_Integer_AbsWithType(PyObject *x, int xtype, CTXT_Object *context);
static PyObject * GMPy_Rational_AbsWithType(PyObject *x, int xtype, CTXT_Object *context);
static PyObject * GMPy_Real_AbsWithType(PyObject *x, int xtype, CTXT_Object *context);
static PyObject * GMPy_Complex_AbsWithType(PyObject *x, int xtype, CTXT_Object *context);

static PyObject * GMPy_MPZ_Abs_Slot(MPZ_Object *x);
static PyObject * GMPy_MPQ_Abs_Slot(MPQ_Object *x);
static PyObject * GMPy_MPFR_Abs_Slot(MPFR_Object *x);
static PyObject * GMPy_MPC_Abs_Slot(MPC_Object *x);

static PyObject * GMPy_Context_Abs(PyObject *self, PyObject *args);

#ifdef __cplusplus
}
#endif
#endif
