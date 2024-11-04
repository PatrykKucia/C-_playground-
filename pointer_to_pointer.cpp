
main()
{

while(1)
{
    int rows = 22222, cols = 22;
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    // Przykładowe wypełnienie tablicy
    matrix[1][2] = 7;

    // Zwolnienie pamięci - bez zwolnienia wyciek 
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
}
}
