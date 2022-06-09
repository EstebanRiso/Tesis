import sys


def main():

    primera_linea= False
    dir="../../Pruebas/Datasets/Fernando_Datasets/"+sys.argv[1]+".txt"
    
    
    with open(dir) as f:
        lines=f.readlines()
        
    counter=0
    
    for line in lines:
        
        chunk=line.split()
        dir2="../../Pruebas/Datasets/"+sys.argv[1]+".txt"
        with open(dir2,"a") as f:
            if primera_linea == True:
                integer_1=int(chunk[1])-1
                integer_2=int(chunk[2])-1
                string=str(integer_1)+" "+str(integer_2)+"\n"
                f.write(string)

        primera_linea=True
    
    f.close()

        
            
            
    
        

main()