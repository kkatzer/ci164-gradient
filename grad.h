#ifndef GRADSOLVER
#define GRADSOLVER

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <math.h>
#include <string.h>
#include "mat_utils.h"

/**
 * @file grad.h
 * @brief Header do arquivo grad.c
 * @author Aryane Ast dos Santos
 * @author Kevin Katzer
 */

double calcResidualNorm(double *A, double *b, double *x, int n);
double residualNorm(double *r, int n);
void residue(double *A, double *b, double *x, double *r, int n);
void helper();

#endif
