#ifndef LOAD_H
#define LOAD_H

#include "model.h"
#include <stdio.h>

/**
 * Load OBJ model from file.
 */
int load_model(const char* filename, Model* model);

/**
 * Count the elements in the model and set counts in the structure.
 */
void count_elements(Model* model, FILE* file);

/**
 * Read the elements of the model and fill the structure with values.
 */
int read_elements(Model* model, FILE* file);

/**
 * Determine the type of the element which is stored in a line of the OBJ file.
 */
ElementType calc_element_type(const char* text);

/**
 * Read the data of the vertex.
 */
int read_vertex(Vertex* vertex, const char* text);

/**
 * Read texture vertex data.
 */
int read_texture_vertex(TextureVertex* texture_vertex, const char* text);

/**
 * Read normal vector data.
 */
int read_normal(Vertex* normal, const char* text);

/**
 * Read triangle data.
 */
int read_quad(struct Quad* quad, const char* text);

/**
 * Check that the character is a numeric character.
 */
int is_numeric(char c);

GLuint load_texture(const char *filename);

#endif
