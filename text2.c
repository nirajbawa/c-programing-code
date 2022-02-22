#include <stdio.h>
#include <stdlib.h>

// Snow Howler is the librarian at the central library of the city of HuskyLand. He must handle requests which come in the following forms:

// 1 x y : Insert a book with  pages at the end of the  shelf.

// 2 x y : Print the number of pages in the  book on the  shelf.

// 3 x : Print the number of books on the  shelf.

// Snow Howler has got an assistant, Oshie, provided by the Department of Education. Although inexperienced, Oshie can handle all of the queries of types 2 and 3.

// Help Snow Howler deal with all the queries of type 1.

// Oshie has used two arrays:


/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books; // t num of books //1d arry 

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages; // t num of pages 2d arr


int main()
{
    int total_number_of_shelves; //total_number_of_shelves
    // printf("total_number_of_shelves : ");
    scanf("%d", &total_number_of_shelves); //5

    total_number_of_books = (int *)calloc(total_number_of_shelves, sizeof(int));
    
    int total_number_of_queries; //total_number_of_queries
    // printf("total_number_of_queries : ");
    scanf("%d", &total_number_of_queries); //5
    
    total_number_of_pages = (int**)malloc(total_number_of_shelves*sizeof(int *));

    for(int i =0; i<total_number_of_shelves; i++)
    {
        total_number_of_pages[i] = 0;
        // total_number_of_pages[i] = (int*)calloc(1100, sizeof(int));
        total_number_of_pages[i] = (int*)malloc(sizeof(int));
    }

    while (total_number_of_queries--) {

        int type_of_query;//type_of_query
        // printf("type_of_query : ");
        scanf("%d", &type_of_query); //1
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x; //shelf number //0
            int y; // pages num //col 15 //t row 5 //t col 1100
            scanf("%d %d", &x, &y);
            
            total_number_of_books[x]++;  //0

            total_number_of_pages[x] = realloc(total_number_of_pages[x], total_number_of_books[x]*sizeof(int));

            total_number_of_pages[x][total_number_of_books[x]-1] = y;
            // int* book = total_number_of_pages[x];
            
            // while(*book!=0)
            // {
            //     book++;
            // }

            //  *book = y;

            // 1 x y : '''Insert a book with y pages''' at the end of the ''''xth wshelf''''.
            
        //type two and three handle by code automatic
        //we have implemant only type 1

        }
        else if (type_of_query == 2) 
        {
            int x; //books num //2
            int y; //shelf number // 0
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
            //2 x y : Print the ''''number of pages'''' in the ''''yth'''' book on the '''''xth''''' '''''shelf'''''.
        } 
        else {
            int x; //shelf number //0
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
         // 3 x : Print the number of books on the xth shelf.
        }
        //loop end here
    }

    

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) { //5
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }


free(total_number_of_books);
free(total_number_of_pages);

    return 0;
}

