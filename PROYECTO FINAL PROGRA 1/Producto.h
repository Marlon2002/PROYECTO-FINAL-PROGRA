#pragma once
#include <iostream>
#include "ConexionBD.h"
#include <mysql.h>
#include <string>
using namespace std;
class Producto
{
private:
	string producto, descripcion, imagen, fecha_ingreso;
	int id_marca, existencia;
	float precio_costo, precio_venta;
public:
	Producto() {
	}
	Producto(string pr, int idm, string desc, string img, float pc, float pv, int ex, string fi ) {
		producto = pr;
		id_marca = idm;
		descripcion = desc;
		imagen = img;
		precio_costo = pc;
		precio_venta = pv;
		existencia = ex;
		fecha_ingreso = fi;
	}
	void setProducto(string pr) { producto = pr; }
	void setIdMarca(int idm) { id_marca = idm; }
	void setDescripcion(string desc) { descripcion = desc; }
	void setImagen(string img) { imagen = img; }
	void setPrecioCosto(float pc) { precio_costo = pc; }
	void setPrecioVenta(float pv) { precio_venta = pv; }
	void setExistencia(int ex) { existencia = ex; }
	void setFechaIngreso(string fi) { fecha_ingreso = fi; }

	string getProducto() { return producto; }
	int getIdMarca() { return id_marca; }
	string getDescripcion() { return descripcion; }
	string getImagen() { return imagen; }
	float getPrecioCosto() { return precio_costo; }
	float getPrecioVenta() { return precio_venta; }
	int getExistencia() { return existencia; }
	string getFechaIngreso() { return fecha_ingreso; }

	void ingresar() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		string idm = to_string(id_marca);
		string p_c = to_string(precio_costo);
		string p_v = to_string(precio_venta);
		string ext = to_string(existencia);
		if (cn.getConectar()) {
			string  consulta = "INSERT INTO productos (producto, idMarca, descripcion, precio_costo, precio_venta, existencia, fecha_ingreso) VALUES ('" + producto+ "', '" + idm+ "', '" + descripcion + "', '" + p_c+ "', '" + p_v + "', '" + ext + "',  now());";
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
			string consulta = "SELECT p.idProducto,m.marca,p.producto,p.descripcion,p.imagen,p.precio_costo,p.precio_venta,p.existencia,p.fecha_ingreso FROM productos as p inner join marcas as m on p.idmarca = m.idmarca; ";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				cout << "id | productos | marca | descripcion | imagen | precio costo | precio venta | existencia | fecha ingreso" << endl;
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << " | " << fila[1] << " | " << fila[2] << " | " << fila[3] << " | " << fila[4] << " | " << fila[5] << " | " << fila[6] << " | " << fila[7] << " | " << fila[8] << endl;
				}
			}
			else {
				cout << "ERROR AL CONECTAR CON LA BASE DE DATOS";
			}

			cn.cerrar_conexion();
		}
	}
	void buscar(int ide) {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		string dato = to_string(ide);
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "SELECT p.idProducto,m.marca,p.producto,p.descripcion,p.imagen,p.precio_costo,p.precio_venta,p.existencia,p.fecha_ingreso FROM productos as p inner join marcas as m on p.idmarca = m.idmarca where p.idProducto = " + dato + "; ";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				cout << "id | productos | marca | descripcion | imagen | precio costo | precio venta | existencia | fecha ingreso" << endl;
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << " | " << fila[1] << " | " << fila[2] << " | " << fila[3] << " | " << fila[4] << " | " << fila[5] << " | " << fila[6] << " | " << fila[7] << " | " << fila[8] << endl;
				}
			}
			else {
				cout << "ERROR AL CONECTAR CON LA BASE DE DATOS";
			}

			cn.cerrar_conexion();
		}
}
	void modificar(int idProducto) {
		int q_estado;
		ConexionBD cn = ConexionBD();
		string idp = to_string(idProducto);
		string idmarca = to_string(id_marca);
		string p_c = to_string(precio_costo);
		string p_v = to_string(precio_venta);
		string ext = to_string(existencia);
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string  consultar = "UPDATE productos SET producto = '" + producto + "', idMarca = " + idmarca + ", descripcion = '"+ descripcion +"' ,precio_costo = " + p_c + ", precio_venta = " + p_v + ", existencia = " + ext + ", fecha_ingreso = now() WHERE (idProducto= '" + idp + "');";
			const char* i = consultar.c_str();
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
	void eliminar(int idProducto) {
		int q_estado;
		string idp = to_string(idProducto);
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string  consultar = "DELETE FROM productos WHERE idProducto=" + idp + ";";
			const char* i = consultar.c_str();
			// executar el query
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << "Eliminacion Exitosa ..." << endl;
			}
			else {
				cout << " xxx Error al Eliminar xxx" << endl;
			}
		}
		else {
			cout << "error de conexion" << endl;
		}
		cn.cerrar_conexion();
	}


	bool existeProducto(int idp) {
		int q_estado;
		int f = 0;
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		string dato = to_string(idp);
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "SELECT p.idProducto,m.marca,p.producto,p.descripcion,p.imagen,p.precio_costo,p.precio_venta,p.existencia,p.fecha_ingreso FROM productos as p inner join marcas as m on p.idmarca = m.idmarca where p.idProducto = " + dato + "; ";
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

