# Universidad del Bio-Bio
# ProyectoTesis
    Proyecto de Tesis 2022 Esteban Risopatrón

# Nota importante
    Este programa fue hecho en C++ 14, trate de usar la misma versión para evitar errores.

# Como usar 

-Porfavor ingrese a la carpeta "Pruebas".
-Dentro de la carpeta "Pruebas" ingrese a la Carpeta "Ejecutables".

-Una vez entrada en la carpeta "Ejecutables" use "test_knn_windows.exe" (caso de Windows) o use "test_knn_linux" de la sgte forma:
            - Windows: ./test_knn_windows.exe [archivo a leer] [numero de vecinos] 
            - Linux: ./test_knn_linux [archivo a leer] [numero de vecinos]

-Si desea usar "fstream.exe" o "fstream":
            - Windows: ./fstream.exe [archivo a leer] 
            - Linux: ./fstream [archivo a leer] 

-Si desea usar "lating.exe" o "lating":
            - Windows: ./lating.exe [archivo a leer] 
            - Linux: ./lating [archivo a leer] 


-Si desea recompilar los archivos, debe usted estar en la carpeta "CPP files" y realizar lo sgte:
            - Windows: g++ -o [nombre_ejecutable].exe   ["nombre_archivo_cpp"].cpp
            - Linux: g++ -o [nombre_ejecutable]   ["nombre_archivo_cpp"].cpp




-RECORDAR:
        - El "archivo a leer" de "test_knn_windows" y "test_knn_linux" son los archivos que estan en la carpeta "Compactados", por lo tanto
          para "fstream" y "fstream.exe" los archivos que leera son los de la carpeta "Datasets", y por ultimo "lating" y "lating.exe" usarán
          archivos de la carpeta "Lat_Long".

        - Si el archivo que utiliza como "Datasets" no esta en "Compactados" debe ejecutar "fstream / fstream.exe" para realizar la compactación.

        - No elimine el ".kt" de su homónimo ".dat" y viceversa, le dará errores.


# Consultas
    esteban.risopatron1801@alumnos.ubiobio.cl