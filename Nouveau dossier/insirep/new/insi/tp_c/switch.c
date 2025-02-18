

    #include <stdio.h>

    int main()
    {
        int code_postal;
	printf ("code_postal:");
        scanf("%d",&code_postal);

        switch(code_postal)
        {
            case 101 :
                printf("antananarivo");
                break;
            case 203 :
                printf("tsy aiko");
                break;
           default :
                printf("relancez l'execution\n");
        }
    }


