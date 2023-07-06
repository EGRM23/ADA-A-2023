// odbc.h: shared file for new databases manufacturers
struct POOL
{
    long (*lpfnOpen)(char *pszDBName);
    void (*lpfnInsertNewRecord)(long DBID);
    void (*lpfnDeleteRecord)(long DBID);
    void (*lpfnMoveNext)(long DBID);
    void (*lpfnMovePrev)(long DBID);
    void (*lpfnClose)(long DBID);
    // More operations go here
};

POOL ABCPool = {&ABC_Open, &ABC_InserNewRegistry,
                &ABC_DeleteRegistry, &ABC_MoveNext,
                &ABC_MovePrev, &ABC_Close};
long ABC_Open(char *pszDBName) { // Some complex code go here }

