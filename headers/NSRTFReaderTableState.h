
@interface NSRTFReaderTableState : NSObject {

    @"NSTextTable" _currentTable;
    @"NSTextTable" _previousTable;
    @"NSMutableArray" _currentRowArray;
    @"NSMutableArray" _previousRowArray;
    i _currentRow;
    i _currentColumn;
    i _currentDefinitionColumn;
    BOOL _currentRowIsLast;
}

 - (void) dealloc;


@end
