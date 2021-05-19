#pragma once
#include "Persona.h"
#include "Persona.h"
#include "ConexionBD.h"
#include <iostream>
#include <mysql.h>
#include <string>
class Proveedor : Persona
{
private:
	string nit, direccion, proveedor;
public:
	Proveedor() {
	}
	Proveedor(string nom, string n, string dir , int tel) :Persona(nom, NULL ,NULL, tel) {
		nit = n;
		direccion = dir;
		proveedor = nom;
	}
	void setNit(string n) { nit = n; }
	void setTelefono(int tel) { telefono = tel; }
	void setNombres(string nom) { nombres = nom; }
	void setDireccion(string dir) { direccion = dir; }

	string getNit() { return nit; }
	string getNombres() { return nombres; }
	int getTelefono() { return telefono; }
	string getDireccion() { return direccion; }

	void ingresar() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		string t = to_string(telefono);
		if (cn.getConectar()) {
			string  consulta = "INSERT INTO proveedores ( proveedor, nit, , direccion, telefono) VALUES ('" + nombres + "', '" + nit + "', '" + direccion+ "', '" + t + "');";
			const char* i = consulta.c_str();
			// executar el query
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << "Ingreso Exitoso ..." << endl;
			}
			else {
				cout << " xxx Error al Ingresar  xxx" << endl;
			}
		}
		else {
			cout << "error de conexion" << endl;
		}
		cn.cerrar_conexion();
	}
	void mostrar() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select * from proveedores";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				cout << "id| PROVEEDOR | nit | DIRECCION | TELEFONO" << endl;
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] <<" | "<< fila[1] << " |" << fila[2] << "|" << fila[3] << "| " << fila[4]  << endl;
				}
			}
			else {
				cout << "ERROR EN LA CONECCION CON LA BASE DE DATOS";
			}
			cn.cerrar_conexion();
		}
	}
	void buscar(int idProveedor) {
		int q_estado;
		string idp = to_string(idProveedor);
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select * from proveedores where idproveedor= " + idp + ";";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				cout << "id | Proveedor" << endl;
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << " | " << fila[1] << " |" << fila[2] << "|" << fila[3] << "| " << fila[4] << endl;
				}
			}
			else {
				cout << "ERROR AL CONECTAR CON LA BASE DE DATOS";
			}
		}
		else {
			cout << "ERROR AL CONECTAR CON LA BASE DE DATOS";
		}

		cn.cerrar_conexion();
	}
	void modificar(int idProveedor) {
		int q_estado;
		string idp = to_string(idProveedor);
		string tel = to_string(telefono);
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "UPDATE proveedores SET proveedor = '" + proveedor + "', nit = '"+ nit +"', direccion = '"+ direccion +"' , telefono = '"+ tel +"' WHERE (idproveedor = '" + idp + "');";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				cout << "INGRESO EXITOSO" << endl;
			}
			else {
				cout << "ERROR AL CONECTAR CON LA BASE DE DATOS";
			}
		}
		else {
			cout << "ERROR AL CONECTAR CON LA BASE DE DATOS";
		}

		cn.cerrar_conexion();
	}
	void eliminar(int idProveedor) {
		int q_estado;
		string idp = to_string(idProveedor);
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "DELETE FROM proveedores WHERE (idproveedor = '" + idp + "');";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				cout << "ELIMINACION EXITOSA" << endl;
			}
			else {
				cout << "ERROR AL CONECTAR CON LA BASE DE DATOS";
			}
		}
		else {
			cout << "ERROR AL ELIMINAR";
		}
		cn.cerrar_conexion();
	}


	bool existeproveedor(int id_p) {
		int q_estado;
		int f = 0;
		string idp = to_string(id_p);
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select * from proveedores where (idproveedor= '" + idp + "');";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				while (fila = mysql_fetch_row(resultado)) {
					f++;
				}
			}
			else {
				cout << "ERROR AL CONECTAR CON LA BASE DE DATOS";
			}
		}
		else {
			cout << "ERROR AL CONECTAR CON LA BASE DE DATOS";
		}
		cn.cerrar_conexion();
		if (f == 1) {
			return true;
		}
		else {
			return false;
		}
	}
};

