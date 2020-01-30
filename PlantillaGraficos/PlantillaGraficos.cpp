// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include <math.h>
#include <iostream>

using namespace std;




void dibujarTrianguloContinuo() {
	glBegin(GL_TRIANGLE_STRIP);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.1f, 0.1f, 0.0f);
	glVertex3f(0.2f, 0.0f, 0.0f);
	glColor3f(1.0f, 0.5f, 1.0f);
	glVertex3f(0.2f, 0.3f, 0.0f);

	glEnd();
}

void dibujarPolygono() {
	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.4f, 0.9f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);
	glVertex3f(0.2f, 0.3f, 0.0f);
	glVertex3f(0.6f, -0.4f, 0.0f);
	glVertex3f(0.4f, - 0.6f, 0.0f);


	glEnd();
}
void dibujarTriangulos() {
	/*
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	*/
	//Establecemos el tipo de primitiva
	glBegin(GL_TRIANGLES);
	//Establecemos Color
	glColor3f(1.0f, 0.0f, 0.0f);
	//Enviar vertices
	glVertex3f(-0.8f, 0.8f, 0.0f);
	glVertex3f(-0.8f, -0.8f, 0.0f);
	glVertex3f(0.8f, -0.8f, 0.0f);

	glVertex3f(0.8f, 0.8f, 0.0f);
	glVertex3f(0.8f, -0.8f, 0.0f);
	glVertex3f(-0.8f, 0.8f, 0.0f);

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(0.0f, 0.01f, 0.0f);
	glVertex3f(-0.01f, -0.01f, 0.0f);
	glVertex3f(0.01f, -0.01f, 0.0f);

	//Especficar que dejaremos de dibujar.
	glEnd();
}

void dibujarLineaContinua()
{
	glBegin(GL_LINE_STRIP);
	glColor3f(0.2f, 0.3f, 1.0f);
	glVertex3f(0.1f, 0.3f, 0.0f);
	glColor3f(0.5f, 0.8f, 0.3f);
	glVertex3f(0.1f, -0.3f, 0.0f);
	glVertex3f(0.4f, -0.3f, 0.0f);

	glEnd();
}
void dibujarLineas()
{
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.4f, 0.6f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.2f, -0.4f, 0.0f);

	glVertex3f(-0.3f, 0.1f, 0.0f);
	glVertex3f(-3.0f,-0.1f,0.0f);

	glEnd();

}

void dibujarnubes()
{


	glPushMatrix();
	glTranslatef(0.1f, 0.45f, 0.0f);
	glScalef(0.7f, 0.3f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (double i = 0; i < 360.0; i += 5.0)
	{
		glVertex3f(-0.2 * cos(i * 3.14159 / 180) - 0.6, 0.2 * sin(i * 3.14159 / 180) - 0.2, 0.0f);
	}

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.13f, 0.5f, 0.0f);
	glScalef(0.6f, 0.2f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (double i = 0; i < 360.0; i += 5.0)
	{
		glVertex3f(-0.2 * cos(i * 3.14159 / 180) - 0.6, 0.2 * sin(i * 3.14159 / 180) - 0.2, 0.0f);
	}

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.6f, 0.67f, 0.0f);
	glScalef(0.6f, 0.3f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (double i = 0; i < 360.0; i += 5.0)
	{
		glVertex3f(-0.2 * cos(i * 3.14159 / 180) - 0.6, 0.2 * sin(i * 3.14159 / 180) - 0.2, 0.0f);
	}

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.65f, 0.7f, 0.0f);
	glScalef(0.6f, 0.2f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (double i = 0; i < 360.0; i += 5.0)
	{
		glVertex3f(-0.2 * cos(i * 3.14159 / 180) - 0.6, 0.2 * sin(i * 3.14159 / 180) - 0.2, 0.0f);
	}

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.9f, 0.87f, 0.0f);
	glScalef(0.6f, 0.3f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (double i = 0; i < 360.0; i += 5.0)
	{
		glVertex3f(-0.2 * cos(i * 3.14159 / 180) - 0.6, 0.2 * sin(i * 3.14159 / 180) - 0.2, 0.0f);
	}

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.95f, 0.9f, 0.0f);
	glScalef(0.6f, 0.2f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (double i = 0; i < 360.0; i += 5.0)
	{
		glVertex3f(-0.2 * cos(i * 3.14159 / 180) - 0.6, 0.2 * sin(i * 3.14159 / 180) - 0.2, 0.0f);
	}

	glEnd();
	glPopMatrix();
}
void dibujarcesped()
{
	glBegin(GL_QUADS);
	glColor3f(0.0f, 1, 0.4f);
	glVertex3f(1.0f, -0.4f, 0.0f);
	glVertex3f(-1.0f, -0.4f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);

	glEnd();
}

void dibujartronco()
{
	glBegin(GL_QUADS);
	glColor3f(0.5f, 0.3f, 0.0f);
	glVertex3f(-0.7f, -0.1f, 0.0f);
	glVertex3f(-0.5f, -0.1f, 0.0f);
	glVertex3f(-0.5f, -0.8f, 0.0f);
	glVertex3f(-0.7f, -0.8f, 0.0f);
	glEnd();
	
}

void dibujarzacate()
{
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.4f, -0.8f, 0.0f);
	glVertex3f(-0.39f, -0.78f, 0.0f);
	glVertex3f(-0.38f, -0.8f, 0.0f);
	glVertex3f(-0.3f, -0.9f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.4f, -0.8f, 0.0f);
	glVertex3f(0.39f, -0.78f, 0.0f);
	glVertex3f(0.38f, -0.8f, 0.0f);
	glVertex3f(0.3f, -0.9f, 0.0f);
	glEnd();
}
void dibujarsol()
{
	glBegin(GL_POLYGON);
	glColor3f(0.99f, 1.0f, 0.0f);
	for (double i = 0; i < 360.0; i += 5.0)
	{
		glVertex3f( -0.2* cos(i * 3.14159 / 180)-0.6, 0.2 * sin(i * 3.14159/180)+0.7, 0.0f);
	}
	glEnd();
}
void dibujarcasa()
{
	glBegin(GL_QUADS);
	glColor3f(0.4f, 0.2f, 0.0f);
	glVertex3f(-0.2f, 0.2f, 0.0f);
	glVertex3f(0.8f, 0.2f, 0.0f);
	glVertex3f(0.8f, -0.7f, 0.0f);
	glVertex3f(-0.2f, -0.7f, 0.0f);
	glEnd();
}

void dibujarhojasdearbol()
{
	glPushMatrix();
	glTranslatef(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(0.38, 0.90, 0.36);
	for (double i = 0; i < 360.0; i += 5.0)
	{
		glVertex3f(-0.2 * cos(i * 3.14159 / 180) - 0.6, 0.2 * sin(i * 3.14159 / 180) - 0.2, 0.0f);
	}
	
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.1f, 0.1f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(0.38, 0.90, 0.36);
	for (double i = 0; i < 360.0; i += 5.0)
	{
		glVertex3f(-0.2 * cos(i * 3.14159 / 180) - 0.6, 0.2 * sin(i * 3.14159 / 180) - 0.2, 0.0f);
	}

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 0.2f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(0.38, 0.90, 0.36);
	for (double i = 0; i < 360.0; i += 5.0)
	{
		glVertex3f(-0.2 * cos(i * 3.14159 / 180) - 0.6, 0.2 * sin(i * 3.14159 / 180) - 0.2, 0.0f);
	}

	glEnd();
	glPopMatrix();

}

void 	dibujarlineasdesol()
{
	glPushMatrix();

	glBegin(GL_LINES);
	glColor3f(0.99f, 1.0f, 0.0f);



	glVertex3f(-0.8f, 0.8f, 0.0f);
	glVertex3f(-0.9f, 0.9f, 0.0f);

	glVertex3f(-0.84f, 0.7f, 0.0f);
	glVertex3f(-0.94f, 0.69f, 0.0f);

	glVertex3f(-0.8f, 0.6f, 0.0f);
	glVertex3f(-0.96f, 0.5f, 0.0f);
	
	glEnd();

	glPopMatrix();

	

	glPushMatrix();

	glTranslatef(-1.2f, 0.0f, 0.0f);
	glRotatef(180.0f, 0.0f, 1.0f, 0.0f);
	glBegin(GL_LINES);
	glColor3f(0.99f, 1.0f, 0.0f);



	glVertex3f(-0.8f, 0.8f, 0.0f);
	glVertex3f(-0.9f, 0.9f, 0.0f);

	glVertex3f(-0.84f, 0.7f, 0.0f);
	glVertex3f(-0.94f, 0.69f, 0.0f);

	glVertex3f(-0.8f, 0.6f, 0.0f);
	glVertex3f(-0.96f, 0.5f, 0.0f);

	glEnd();

	glPopMatrix();


	
}

void 	dibujarpuerta()
{
	glPushMatrix();

	glScalef(0.3f,0.5f,0.0f);

	glTranslatef(0.6f, -0.7f, 0.0f);

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.6f, 0.5f);
	glVertex3f(-0.2f, 0.1f, 0.0f);
	glVertex3f(0.8f, 0.1f, 0.0f);
	glVertex3f(0.8f, -0.7f, 0.0f);
	glVertex3f(-0.2f, -0.7f, 0.0f);
	glEnd();

	glPopMatrix();

}

void dibujarpicaporte()
{
	glPushMatrix();
	glTranslatef(0.5f, -0.45f, 0.0f);

	glScalef(0.2f, 0.2f, 0.0f);

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (double i = 0; i < 360.0; i += 5.0)
	{
		glVertex3f(-0.2 * cos(i * 3.14159 / 180) - 0.6, 0.2 * sin(i * 3.14159 / 180) - 0.2, 0.0f);
	}

	glEnd();
	glPopMatrix();
}
void dibujarventana()
{


	glPushMatrix();

	glScalef(0.5f, 0.5f, 0.0f);

	glTranslatef(0.6f, 0.2f, 0.0f);

	glBegin(GL_QUADS);
	glColor3f(0.90, 0.49, 0.07);
	glVertex3f(-0.2f, 0.1f, 0.0f);
	glVertex3f(0.8f, 0.1f, 0.0f);
	glVertex3f(0.8f, -0.7f, 0.0f);
	glVertex3f(-0.2f, -0.7f, 0.0f);
	glEnd();

	glPopMatrix();

	glPushMatrix();

	glScalef(0.42f, 0.42f, 0.0f);

	glTranslatef(0.8f, 0.2f, 0.0f);

	glBegin(GL_QUADS);
	glColor3f(0.09, 0.82, 0.90);
	glVertex3f(-0.2f, 0.1f, 0.0f);
	glVertex3f(0.8f, 0.1f, 0.0f);
	glVertex3f(0.8f, -0.7f, 0.0f);
	glVertex3f(-0.2f, -0.7f, 0.0f);
	glEnd();

	glPopMatrix();

	glPopMatrix();

	glPushMatrix();

	glScalef(0.05f, 0.42f, 0.0f);

	glTranslatef(8.8f, 0.2f, 0.0f);

	glBegin(GL_QUADS);

	glColor3f(0.90, 0.49, 0.07);

	glVertex3f(-0.2f, 0.1f, 0.0f);
	glVertex3f(0.8f, 0.1f, 0.0f);
	glVertex3f(0.8f, -0.7f, 0.0f);
	glVertex3f(-0.2f, -0.7f, 0.0f);
	glEnd();

	glPopMatrix();

	
}
void ventana2()
{
	glPushMatrix();

	glScalef(0.42f, 0.05f, 0.0f);

	glTranslatef(8.8f, 0.2f, 0.0f);

	glBegin(GL_QUADS);

	glColor3f(0.90, 0.49, 0.07);

	glVertex3f(-0.2f, 0.1f, 0.0f);
	glVertex3f(0.8f, 0.1f, 0.0f);
	glVertex3f(0.8f, -0.7f, 0.0f);
	glVertex3f(-0.2f, -0.7f, 0.0f);
	glEnd();

	glPopMatrix();
}

void dibujartecho()
{
	glBegin(GL_TRIANGLES);
	glColor3f(0.90, 0.49, 0.07);
	glVertex3f(-0.3f,0.2f,0.0f);
	glVertex3f(0.9f, 0.2f, 0.0f);
	glVertex3f(0.3f, 0.5f, 0.0f);
	glEnd();
}
void dibujar() {
	dibujarcesped();
	dibujartronco();
	dibujarzacate();
	dibujarsol();
	dibujartronco();
	dibujarcasa();
	dibujarhojasdearbol();
	dibujarnubes();
	dibujarlineasdesol();

	dibujarpuerta();

	dibujarpicaporte();

	dibujarventana();

	ventana2();

	dibujartecho();
}

int main()
{
	//Declarar una ventana
	GLFWwindow*window;

	//Si no se pudo iniciar GLFW 
	//Terminamos ejecucion.

	if (!glfwInit())
	{
		exit(EXIT_FAILURE);
	}
	//Si se puedo iniciar GLFW
	//Inicializmos la ventana
	//Todas las funciones especificas de GLFW tienen el sufijo glfw
	window = glfwCreateWindow(600,600,"Ventana",NULL,NULL);

	//Si no pudo crear la ventana
	//Terminamos ejecucion
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	//Establecemos la ventana como contexto
	glfwMakeContextCurrent(window);

	//Una vex establecido el contexto
	//Se activan las funciones "Modernas" (gpu) 

	
	glewExperimental = true;

	GLenum errores = glewInit();
	if (errores != GLEW_OK)
	{
		glewGetErrorString(errores);
	}

	const GLubyte* versionGL = glGetString(GL_VERSION);
	cout << "Version Opengl: " << versionGL;

	//Ciclo de dibujo (Draw Loop)
	while (!glfwWindowShouldClose(window))
	{
		//Establecer region de dibujo
		glViewport(0, 0, 600, 600);
		//Establecemos el color de borrado.
		glClearColor(0.2,0.6,1,1);
		//Borrar!
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		//Actualizar valores y dibujar
		dibujar();
		glfwPollEvents();

		glfwSwapBuffers(window);

	}
	//Despues del ciclo de dibujo
	//Eliminamos venta y procesos de glfw
	glfwDestroyWindow(window);
	glfwTerminate();
}

