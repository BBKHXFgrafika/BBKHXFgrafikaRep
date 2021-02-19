#ifndef MATRIX_H //Includeguard ha több include van megakadályozza ha még nincs definiálva akkor behúzza
#define MATRIX_H

/**
 * Initializes all elements of the matrix to zero.
 */
void init_zero_matrix(float matrix[3][3]);

/**
 * Print the elements of the matrix.
 */
void print_matrix(const float matrix[3][3]);

/**
 * Add matrices.
 */
void add_matrices(const float a[3][3], const float b[3][3], float c[3][3]);

/**
 * Initializes an identity matrix
 */
void init_identity_matrix(float matrix[3][3]);

/**
 * Multiple a matrix by a scalar value.
 */
 
 void mult_by_scalar(float result[3][3], float scalar, const float matrix[3][3]);

#endif // MATRIX_H

