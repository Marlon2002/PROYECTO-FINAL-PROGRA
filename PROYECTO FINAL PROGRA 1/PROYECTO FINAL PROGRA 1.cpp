// PROYECTO FINAL PROGRA 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Cliente.h"
#include "Puesto.h"
#include "Empleado.h"
#include "Proveedor.h"
#include "Marca.h"
#include "Producto.h"
#include "Venta.h"
#include "Compra_Detalle.h"
#include "Venta_Detalle.h"
#include "Compra.h"
using namespace std;

void menu();

void ingresarPuesto();
void buscarPuesto();
void modificarPuesto();
void eliminarPuesto();

void ingresarEmpleado();
void buscarEmpleado();
void modificarEmpleado();
void eliminarEmpleado();

void ingresarCliente();
void buscarCliente();
void modificarCliente();
void eliminarCliente();

void ingresarProveedor();
void buscarProveedor();
void modificarProveedor();
void eliminarProveedor();

void ingresarMarca();
void buscarMarca();
void modificarMarca();
void eliminarMarca();

void ingresarProducto();
void buscarProducto();
void modificarProducto();
void eliminarProducto();





void puestos();
void empleados();
void clientes();
void proveedores();
void marcas();
void productos();
void ventas();
void compras();

int main()
{    
     menu();
}
void menu() {
    int opcion;
    do {
        system("cls");
        cout << "----------------" << endl;
        cout << "PROYECTO FINAL PROGRAMACION 1" << endl;
        cout << " [1]  ACCEDER A LOS PUESTOS" << endl;
        cout << " [2]  ACCEDER A LOS EMPLEADOS" << endl;
        cout << " [3]  ACCEDER A LOS CLIENTES" << endl;
        cout << " [4]  ACCEDER A LOS PROVEEDORES" << endl;
        cout << " [5]  ACCEDER A LAS MARCAS" << endl;
        cout << " [6]  ACCEDER A LOS PRODUCTOS" << endl;
        cout << " [7]  ACCEDER A LAS VENTAS" << endl;
        cout << " [8]  ACCEDER A LAS COMPRAS" << endl;
        cout << " [9]  REALIZAR UNA VENTA" << endl;
        cout << " [10] SALIR" << endl;
        cin >> opcion;
        switch (opcion) {
        case 1:
            puestos();
            break;
        case 2:
            empleados();
            break;
        case 3:
            clientes();
            break;
        case 4:
            proveedores();
            break;
        case 5:
            marcas();
            break;
        case 6:
            productos();
            break;
        case 7:
            ventas();
            break;
        case 8:
            compras();
            break;
        }
    } while (opcion != 10);
}

void puestos(){
    int opc=0;
    Puesto p =Puesto();
    do {
        system("cls");
        cout << "TABLA DE REGISTRO DE PUESTOS" << endl;
        cout << "QUE DESEA REALIZAR" << endl;
        cout << "[1] INGRESAR REGISTROS" << endl;
        cout << "[2] BUSCAR REGISTRO" << endl;
        cout << "[3] MOSTRAR EL LISTADO" << endl;
        cout << "[4] MODIFICAR UN REGISTRO" << endl;
        cout << "[5] ELIMINAR UN REGISTRO" << endl;
        cout << "[6] REGRESAR" << endl;
        cin >> opc;
        switch (opc) {
        case 1:
            system("cls");
            ingresarPuesto();
            system("pause");
            break;
        case 2:
            system("cls");
            buscarPuesto();
            system("pause");
            break;
        case 3:
            system("cls");
            p.mostrar();
            system("pause");
            break;
        case 4:
            system("cls");
            modificarPuesto();
            system("pause");
            break;
        case 5:
            system("cls");
            eliminarPuesto();
            system("pause");
            break;
        }
    } while (opc != 6);

}
void empleados(){
    int opc;
    Empleado e = Empleado();
    do {
        system("cls");
        cout << "TABLA DE REGISTRO DE EMPLEADOS" << endl;
        cout << "QUE DESEA REALIZAR" << endl;
        cout << "[1] INGRESAR REGISTROS" << endl;
        cout << "[2] BUSCAR REGISTRO" << endl;
        cout << "[3] MOSTRAR EL LISTADO" << endl;
        cout << "[4] MODIFICAR UN REGISTRO" << endl;
        cout << "[5] ELIMINAR UN REGISTRO" << endl;
        cout << "[6] REGRESAR" << endl;
        cin >> opc;
        switch (opc) {
        case 1:
            system("cls");
            ingresarEmpleado();
            system("pause");
            break;
        case 2:
            system("cls");
            buscarEmpleado();
            system("pause");
            break;
        case 3:
            system("cls");
            e.mostrar();
            system("pause");
            break;
        case 4:
            system("cls");
            modificarEmpleado();
            system("pause");
            break;
        case 5:
            system("cls");
            eliminarEmpleado();
            system("pause");
            break;
        }
    } while (opc != 6);
}
void clientes(){
    int opc;
    Cliente c = Cliente();
    do {
        system("cls");
        cout << "TABLA DE REGISTRO DE CLIENTES" << endl;
        cout << "QUE DESEA REALIZAR" << endl;
        cout << "[1] INGRESAR REGISTROS" << endl;
        cout << "[2] BUSCAR REGISTRO" << endl;
        cout << "[3] MOSTRAR EL LISTADO" << endl;
        cout << "[4] MODIFICAR UN REGISTRO" << endl;
        cout << "[5] ELIMINAR UN REGISTRO" << endl;
        cout << "[6] REGRESAR" << endl;
        cin >> opc;
        switch (opc) {
        case 1:

            break;
        case 2:

            break;
        case 3:
            c.mostrar();
            break;
        case 4:

            break;
        case 5:

            break;
        }
    } while (opc != 6);
}
void proveedores(){
    int opc;
    Proveedor pv = Proveedor();
    do {
        system("cls");
        cout << "TABLA DE REGISTRO DE PROVEEDORES" << endl;
        cout << "QUE DESEA REALIZAR" << endl;
        cout << "[1] INGRESAR REGISTROS" << endl;
        cout << "[2] BUSCAR REGISTRO" << endl;
        cout << "[3] MOSTRAR EL LISTADO" << endl;
        cout << "[4] MODIFICAR UN REGISTRO" << endl;
        cout << "[5] ELIMINAR UN REGISTRO" << endl;
        cout << "[6] REGRESAR" << endl;
        cin >> opc;
        switch (opc) {
        case 1:
            ingresarProveedor();
            break;
        case 2:
            buscarProveedor();
            break;
        case 3:
            pv.mostrar();
            break;
        case 4:
            modificarProveedor();
            break;
        case 5:
            eliminarProveedor();
            break;
        }
    } while (opc != 6);
}
void marcas(){
    int opc;
    Marca m = Marca();
    do {
        system("cls");
        cout << "TABLA DE REGISTRO DE MARCAS" << endl;
        cout << "QUE DESEA REALIZAR" << endl;
        cout << "[1] INGRESAR REGISTROS" << endl;
        cout << "[2] BUSCAR REGISTRO" << endl;
        cout << "[3] MOSTRAR EL LISTADO" << endl;
        cout << "[4] MODIFICAR UN REGISTRO" << endl;
        cout << "[5] ELIMINAR UN REGISTRO" << endl;
        cout << "[6] REGRESAR" << endl;
        cin >> opc;
        switch (opc) {
        case 1:
            ingresarMarca();
            break;
        case 2:
            buscarMarca();
            break;
        case 3:
            m.mostrar();
            break;
        case 4:
            modificarMarca();
            break;
        case 5:
            eliminarMarca();
            break;
        }
    } while (opc != 6);
}
void productos(){
    int opc;
    Producto pr = Producto();
    do {
        system("cls");
        cout << "TABLA DE REGISTRO DE PRODUCTOS" << endl;
        cout << "QUE DESEA REALIZAR" << endl;
        cout << "[1] INGRESAR REGISTROS" << endl;
        cout << "[2] BUSCAR REGISTRO" << endl;
        cout << "[3] MOSTRAR EL LISTADO" << endl;
        cout << "[4] MODIFICAR UN REGISTRO" << endl;
        cout << "[5] ELIMINAR UN REGISTRO" << endl;
        cout << "[6] REGRESAR" << endl;
        cin >> opc;
        switch (opc) {
        case 1:
            ingresarProducto();
            break;
        case 2:
            buscarProducto();
            break;
        case 3:
            pr.mostrar();
            break;
        case 4:
            modificarProducto();
            break;
        case 5:
            eliminarProducto();
            break;
        }
    } while (opc != 6);
}
void ventas(){
    int opc;
    Venta v = Venta();
    Venta_Detalle vd = Venta_Detalle();
    do {
        system("cls");
        cout << "TABLA DE REGISTRO DE VENTAS" << endl;
        cout << "QUE DESEA REALIZAR" << endl;
        cout << "[1] INGRESAR REGISTROS" << endl;
        cout << "[2] BUSCAR REGISTRO" << endl;
        cout << "[3] MOSTRAR EL LISTADO" << endl;
        cout << "[4] MODIFICAR UN REGISTRO" << endl;
        cout << "[5] ELIMINAR UN REGISTRO" << endl;
        cout << "[6] REGRESAR" << endl;
        cin >> opc;
        switch (opc) {
        case 1:

            break;
        case 2:

            break;
        case 3:
            v.mostrar();
            break;
        case 4:

            break;
        case 5:

            break;
        }
    } while (opc != 6);
}
void compras(){
    int opc;
    Compra cp = Compra();
    Compra_Detalle cdt = Compra_Detalle();
    do {
        system("cls");
        cout << "TABLA DE REGISTRO DE COMPRAS" << endl;
        cout << "QUE DESEA REALIZAR" << endl;
        cout << "[1] INGRESAR REGISTROS" << endl;
        cout << "[2] BUSCAR REGISTRO" << endl;
        cout << "[3] MOSTRAR EL LISTADO" << endl;
        cout << "[4] MODIFICAR UN REGISTRO" << endl;
        cout << "[5] ELIMINAR UN REGISTRO" << endl;
        cout << "[6] REGRESAR" << endl;
        cin >> opc;
        switch (opc) {
        case 1:

            break;
        case 2:

            break;
        case 3:
            cp.mostrar();
            break;
        case 4:

            break;
        case 5:

            break;
        }
    } while (opc != 6);
}

void ingresarPuesto() {
    string puesto;
    cout << "INGRESE NOMBRE DEL PUESTO ";
    cin.ignore();
    getline(cin, puesto);
    Puesto p = Puesto(puesto);
    p.ingresar();
    system("pause");
}
void buscarPuesto() {
    int idp;
    bool existe;
    cout << "INGRESE EL ID DEL PUESTO A BUSCAR ";
    cin >> idp;
    Puesto p = Puesto();
    existe = p.existepuesto(idp);
    if (existe == true) {
        p.buscar(idp);
        system("pause");
    }
    else {
        cout << "NO SE ENCONTRO EL ID EN LA BASE DE DATOS" << endl;
        system("pause");
    }
}
void modificarPuesto() {
    int idp;
    string puesto;
    char respuesta;
    bool existe;
    cout << "INGRESE EL ID DEL PUESTO ";
    cin >> idp;
    Puesto p = Puesto();
    existe = p.existepuesto(idp);
    if (existe == true) {
        p.buscar(idp);
        cout << "SEGURO QUE QUIERE MODIFICAR ESTE REGISTRO [S/N]" << endl;
        cin >> respuesta;
        if ((respuesta == 's') || (respuesta == 'S')) {
            cout << "INGRESE EL NUEVO NOMBRE DEL PUESTO " << endl;
            cin.ignore();
            getline(cin, puesto);
            p = Puesto(puesto);
            p.modificar(idp);
            system("pause");
        }
        else
        {
            cout << "SE HA INTERRUMPIDO LA MODIFICACION" << endl;
            system("pause");
        }
    }
    else {
        cout << "EL ID QUE INGRESO NO ESTA REGISTRADO EN LA BASE DE DATOS"<<endl;
        system("pause");
    }
}
void eliminarPuesto() {
    int idp;
    string puesto;
    char respuesta;
    bool existe;
    cout << "INGRESE EL ID DEL PUESTO ";
    cin >> idp;
    Puesto p = Puesto();
    existe = p.existepuesto(idp);
    if (existe == true) {
        p.buscar(idp);
        cout << "RECUERDE QUE NO PUEDE ELIMINAR UN PUESTO SI HAY EMPLEADOS ASIGNADOS A ESTE" << endl;
        cout << "SEGURO QUE QUIERE ELIMINAR ESTE REGISTRO [S/N]" << endl;
        cin >> respuesta;
        if ((respuesta == 's') || (respuesta == 'S')) {
            p.eliminar(idp);
            system("pause");
        }
        else
        {
            cout << "SE HA INTERRUMPIDO LA ELIMINACION" << endl;
            system("pause");
        }
    }
    else {
        cout << "NO SE HA ENCONTRADO EL ID EN LA BASE DE DATOS" << endl;
        system("pause");
    }
}

void ingresarEmpleado() {
    Puesto pu = Puesto();
    string nombres, apellidos,direccion, dpi, fecha_nacimiento, fecha_inicio_lab,mf;
    int id_puesto,telefono,genero=-1;
    bool existe;
    cout << "INGRESE LOS DATOS QUE SE LE SOLICITA " << endl;
    cout << "INGRESE NOMBRES ";
    cin.ignore();
    getline(cin, nombres);
    cout << "INGRESE APELLIDOS ";
    getline(cin, apellidos);
    cout << "INGRESE LA DIRECCION DE DOMICILIO ";
    getline(cin, direccion);
    cout << "INGRESE TELEFONO ";
    cin >> telefono;
    cout << "INGRESE SU DPI ";
    cin.ignore();
    getline(cin, dpi);
    cout << "INGRESE SU GENERO [M/F] ";
    do {
        cin >> mf;
        if (mf == "M" || mf == "m") {
            genero = 0;
        }
        else {
            if (mf == "F" || mf == "f") {
                genero = 1;
            }
            else {
                cout << "PORFAVOR INGRESE UNA OPCION VALIDA " << endl;
                cout << "INGRESE SU GENERO [M/F] ";
            }
        }
    } while (genero != 0 && genero != 1);
    cout << "INGRESE LA FECHA DE NACIMIENTO [AÑO-MES-DIA] ";
    cin.ignore();
    getline(cin, fecha_nacimiento);
    cout << "ASIGNE EL PUESTO POR MEDIO DEL ID " << endl;
    do {
        pu.mostrar();
        cout << endl << "ASIGNE UN VALOR VALIDO ---> ";
        cin >> id_puesto;
        existe = pu.existepuesto(id_puesto);
    }while (existe == false);
    cout << "INGRESE LA FECHA DE INICIO DE LABORES [AÑO-MES-DIA] ";
    cin.ignore();
    getline(cin, fecha_inicio_lab);
    Empleado e = Empleado(nombres,apellidos,direccion,telefono,dpi,genero,fecha_nacimiento,id_puesto,fecha_inicio_lab,"");
    e.ingresar();
    system("pause");
}

void buscarEmpleado() {
    Empleado e = Empleado();
    bool existe;
    int ide;
    cout << "INGRESE EL ID DEL EMPLEADO A BUSCAR ";
    cin >> ide;
    existe = e.existeEmpleado(ide);
    if (existe == true) {
        e.buscar(ide);
        system("pause");
    }
    else {
        cout << "NO EXISTE ESTE ID EN LA BASE DE DATOS" << endl;
        system("pause");
    }
}
void modificarEmpleado() {
    Empleado e = Empleado();
    Puesto pu = Puesto();
    string nombres, apellidos, direccion, dpi, fecha_nacimiento, fecha_inicio_lab, mf;
    int id_puesto, telefono, genero = -1;
    bool existeE,existe;
    int ide;
    char respuesta;
    cout << "INGRESE EL ID DEL EMPLEADO A MODIFICAR ";
    cin >> ide;
    existeE = e.existeEmpleado(ide);
    if (existeE == true) {
        e.buscar(ide);
        cout << "SEGURO QUE QUIERE MODIFICAR ESTE REGISTRO [S/N]";
        cin >> respuesta;
        if (respuesta == 'S' || respuesta == 's') {
            cout << "INGRESE NOMBRES ";
            cin.ignore();
            getline(cin, nombres);

            cout << "INGRESE APELLIDOS ";
            getline(cin, apellidos);

            cout << "INGRESE LA DIRECCION DE DOMICILIO ";
            getline(cin, direccion);

            cout << "INGRESE TELEFONO ";
            cin >> telefono;

            cout << "INGRESE SU DPI ";
            cin.ignore();
            getline(cin, dpi);

            cout << "INGRESE SU GENERO [M/F] ";
            do {
                cin >> mf;
                if (mf == "M" || mf == "m") {
                    genero = 0;
                }
                else {
                    if (mf == "F" || mf == "f") {
                        genero = 1;
                    }
                    else {
                        cout << "PORFAVOR INGRESE UNA OPCION VALIDA " << endl;
                        cout << "INGRESE SU GENERO [M/F] ";
                    }
                }
            } while (genero != 0 && genero != 1);

            cout << "INGRESE LA FECHA DE NACIMIENTO [AÑO-MES-DIA] ";
            cin.ignore();
            getline(cin, fecha_nacimiento);

            cout << "ASIGNE EL PUESTO POR MEDIO DEL ID " << endl;
            do {
                pu.mostrar();
                cout << endl << "ASIGNE UN VALOR VALIDO ---> ";
                cin >> id_puesto;
                existe = pu.existepuesto(id_puesto);
            } while (existe == false);

            cout << "INGRESE LA FECHA DE INICIO DE LABORES [AÑO-MES-DIA] ";
            cin.ignore();
            getline(cin, fecha_inicio_lab);
            e = Empleado(nombres, apellidos, direccion, telefono, dpi, genero, fecha_nacimiento, id_puesto, fecha_inicio_lab, "");
            e.modificar(ide);
            system("pause");
        }
        else {
            cout << "MODIFICACION CANCELADA" << endl;
            system("pause");
        }
    }
    else {
        cout << "NO EXISTE ESTE ID EN LA BASE DE DATOS" << endl;
        system("pause");
    }
}

void eliminarEmpleado() {
    Empleado e = Empleado();
    bool existe;
    int ide;
    char respuesta;
    cout << "INGRESE EL ID DEL EMPLEADO A BUSCAR ";
    cin >> ide;
    existe = e.existeEmpleado(ide);
    if (existe == true) {
        e.buscar(ide);
        cout << "SEGURO QUE QUIERES ELIMINAR ESTE REGISTRO [S/N] ";
        cin >> respuesta;
        if (respuesta == 'S' || respuesta == 's') {
            e.eliminar(ide);
            system("pause");
        }
        else {
            cout << "SE HA DETENIDO LA ELIMINACION" << endl;
            system("pause");
        }
    }
    else {
        cout << "NO EXISTE ESTE ID EN LA BASE DE DATOS" << endl;
        system("pause");
    }

}

void ingresarMarca() {
    string marca;
    cout << "INGRESE NOMBRE DE LA MARCA ";
    cin.ignore();
    getline(cin, marca);
    Marca m = Marca(marca);
    m.ingresar();
    system("pause");
}

void buscarMarca() {
    int idm;
    bool existe;
    cout << "INGRESE EL ID DE LA MARCA A BUSCAR ";
    cin >> idm;
    Marca m = Marca();
    existe = m.existemarca(idm);
    if (existe == true) {
        m.buscar(idm);
        system("pause");
    }
    else {
        cout << "NO SE ENCONTRO EL ID EN LA BASE DE DATOS" << endl;
        system("pause");
    }
}


void modificarMarca() {
    int idm;
    string marca;
    char respuesta;
    bool existe;
    cout << "INGRESE EL ID DE LA MARCA";
    cin >> idm;
    Marca m = Marca();
    existe = m.existemarca(idm);
    if (existe == true) {
        m.buscar(idm);
        cout << "SEGURO QUE QUIERE MODIFICAR ESTE REGISTRO [S/N]" << endl;
        cin >> respuesta;
        if ((respuesta == 's') || (respuesta == 'S')) {
            cout << "INGRESE EL NUEVO NOMBRE DEL PUESTO " << endl;
            cin.ignore();
            getline(cin, marca);
            m = Marca(marca);
            m.modificar(idm);
            system("pause");
        }
        else
        {
            cout << "SE HA INTERRUMPIDO LA MODIFICACION" << endl;
            system("pause");
        }
    }
    else {
        cout << "EL ID QUE INGRESO NO ESTA REGISTRADO EN LA BASE DE DATOS" << endl;
        system("pause");
    }
}




void eliminarMarca() {
    int idm;
    string marca;
    char respuesta;
    bool existe;
    cout << "INGRESE EL ID DE LA MARCA ";
    cin >> idm;
    Marca m = Marca();
    existe = m.existemarca(idm);
    if (existe == true) {
        m.buscar(idm);
        cout << "RECUERDE QUE NO PUEDE ELIMINAR UNA MARCA SI HAY PRODUCTOS ASIGNADOS A ESTE" << endl;
        cout << "SEGURO QUE QUIERE ELIMINAR ESTE REGISTRO [S/N]" << endl;
        cin >> respuesta;
        if ((respuesta == 's') || (respuesta == 'S')) {
            m.eliminar(idm);
            system("pause");
        }
        else
        {
            cout << "SE HA INTERRUMPIDO LA ELIMINACION" << endl;
            system("pause");
        }
    }
    else {
        cout << "NO SE HA ENCONTRADO EL ID EN LA BASE DE DATOS" << endl;
        system("pause");
    }
}

void ingresarProducto() {
    Producto p = Producto();
    Marca m = Marca();
    string producto, descripcion;
    int id_marca, existencia ;
    float p_c, p_v;
    int idp;
    bool existe;
    cout << "INGRESE LOS DATOS QUE SE LE SOLICITA " << endl;
    cout << "INGRESE  PRODUCTO :"<<endl;
    cin.ignore();
    getline(cin, producto);
    cout << "ASIGNE LA MARCA POR MEDIO DEL ID " << endl;
    do {
        m.mostrar();
        cout << endl << "ASIGNE UN VALOR VALIDO ---> ";
        cin >> id_marca;
        cin.ignore();
        existe = m.existemarca(id_marca);
    } while (existe == false);

    cout << "INGRESE LA DESCRIPCION: "<<endl;
    getline(cin, descripcion);
    cout << "INGRESE EL PRECIO COSTO: "<<endl;
    cin >> p_c;
    cout << "INGRESE SU PRECIO VENTA: "<<endl;
    cin.ignore();
    cin >> p_v;
    cout << "INGRESE LAS EXISTENCIAS: " << endl;
    cin >> existencia;
    cin.ignore();
    p = Producto (producto, id_marca, descripcion,"" ,p_c, p_v, existencia, "");
    p.ingresar();
    system("pause");


}

void buscarProducto() {
    Producto p = Producto();
    bool existe;
    int idp;
    cout << "INGRESE EL ID DEL PRODUCTO A BUSCAR ";
    cin >> idp;
    existe = p.existeProducto(idp);
    if (existe == true) {
        p.buscar(idp);
        system("pause");
    }
    else {
        cout << "NO EXISTE ESTE ID EN LA BASE DE DATOS" << endl;
        system("pause");
    }

}

void modificarProducto() {
    Producto p = Producto();
    Marca m = Marca();
    string producto, descripcion;
    int id_marca, existencia;
    float p_c, p_v;
    bool existeE, existe;
    int idp;
    char respuesta;
    cout << "INGRESE EL ID DEL PRODUCTO A MODIFICAR ";
    cin >> idp;
    existeE = p.existeProducto(idp);
    if (existeE == true) {
        p.buscar(idp);
        cout << "SEGURO QUE QUIERE MODIFICAR ESTE REGISTRO [S/N]";
        cin >> respuesta;
        if (respuesta == 'S' || respuesta == 's') {
            cout << "INGRESE PRODUCTO ";
            cin.ignore();
            getline(cin, producto);

            cout << "ASIGNE LA MARCA POR MEDIO DEL ID " << endl;
            do {
                m.mostrar();
                cout << endl << "ASIGNE UN VALOR VALIDO ---> ";
                cin >> id_marca;
                existe = m.existemarca(id_marca);
            } while (existe == false);

            cout << "INGRESE LA DESCRIPCION ";
            getline(cin, descripcion);
            cout << "INGRESE EL PRECIO COSTO ";
            cin >> p_c;
            cout << "INGRESE SU PRECIO VENTA ";
            cin.ignore();
            cin >> p_v;
            cout << "INGRESE LAS EXISTENCIAS";
            cin >> existencia;
            p = Producto(producto, id_marca, "", descripcion, p_c, p_v, existencia, "");
            p.modificar(idp);
            system("pause");
        }
        else {
            cout << "MODIFICACION CANCELADA" << endl;
            system("pause");
        }
    }
    else {
        cout << "NO EXISTE ESTE ID EN LA BASE DE DATOS" << endl;
        system("pause");
    }
}

void eliminarProducto() {
    Producto p = Producto();
    bool existe;
    int idp;
    char respuesta;
    cout << "INGRESE EL ID DEL PRODUCTO A ELIMINAR";
    cin >> idp;
    existe = p.existeProducto(idp);
    if (existe == true) {
        p.buscar(idp);
        cout << "SEGURO QUE QUIERES ELIMINAR ESTE REGISTRO [S/N] ";
        cin >> respuesta;
        if (respuesta == 'S' || respuesta == 's') {
            p.eliminar(idp);
            system("pause");
        }
        else {
            cout << "SE HA DETENIDO LA ELIMINACION" << endl;
            system("pause");
        }
    }
    else {
        cout << "NO EXISTE ESTE ID EN LA BASE DE DATOS" << endl;
        system("pause");
    }

}

void ingresarProveedor() {
    Proveedor p = Proveedor();
    string proveedor, direccion,  nit;
    int tel, idp;
    bool existe;
    cin.ignore();
    cout << "INGRESE EL PROVEEDOR: " << endl;
    getline(cin, proveedor);
    cout << "INGRESE EL NIT: " << endl;
    cin >> nit;
    cin.ignore();
    cout << "INGRESE LA DIRECCION :" << endl;
    getline(cin, direccion);
    cout << "INGRESE EL TELEFONO :" << endl;
    cin >> tel;
    cin.ignore();
    p = Proveedor(proveedor, nit, direccion, tel);
    p.ingresar();
    system("pause");
}

void buscarProveedor() {
    Proveedor p = Proveedor();
    int idp;
    bool existe;
    cout << "INGRESE EL ID A BUSCAR DEL PROVEEDOR: " << endl;
    cin >> idp;
    existe = p.existeproveedor(idp);
    if (existe == true) {
        p.buscar(idp);
        system("pause");
    }
    else {
        cout << "NO EXISTEN LOS DATOS" << endl;
    }
}

void modificarProveedor() {
    Proveedor p = Proveedor();
    string proveedor, direccion, nit;
    int  tel, idp;
    bool existe;
    char respuesta;

    cout << "INGRESE EL ID DEL PROVEEDOR A MODIFICAR: " << endl;
    cin >> idp;
    existe = p.existeproveedor(idp);
    if (existe == true) {
        p.buscar(idp);
        cout << "SEGURO QUE DESEA MODIFICAR ESTE DATO? S/N" << endl;
        cin >> respuesta;
        if (respuesta == 's' || respuesta == 'S') {
            cin.ignore();
            cout << "INGRESE EL PROVEEDOR: " << endl;
            getline(cin, proveedor);
            cout << "INGRESE EL NIT: " << endl;
            cin >> nit;
            cin.ignore();
            cout << "INGRESE LA DIRECCION :" << endl;
            getline(cin, direccion);
            cout << "INGRESE EL TELEFONO :" << endl;
            cin >> tel;
            cin.ignore();
            p = Proveedor(proveedor, nit, direccion, tel);
            p.modificar(idp);
            system("pause");
        }

        else {
            cout << "MODIFICACION CANCELADA" << endl;
            system("pause");
        }

    }
    else {
        cout << "EL ID NO EXISTE" << endl;
        system("pause");
    }
}
void eliminarProveedor() {
    Proveedor p = Proveedor();
    bool existe;
    int idp;
    char respuesta;
    cout << "INGRESE EL ID DEL PRODUCTO A ELIMINAR";
    cin >> idp;
    existe = p.existeproveedor(idp);
    if (existe == true) {
        p.buscar(idp);
        cout << "SEGURO QUE QUIERES ELIMINAR ESTE REGISTRO [S/N] ";
        cin >> respuesta;
        if (respuesta == 'S' || respuesta == 's') {
            p.eliminar(idp);
            system("pause");
        }
        else {
            cout << "SE HA DETENIDO LA ELIMINACION" << endl;
            system("pause");
        }
    }
    else {
        cout << "NO EXISTE ESTE ID EN LA BASE DE DATOS" << endl;
        system("pause");
    }

}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
