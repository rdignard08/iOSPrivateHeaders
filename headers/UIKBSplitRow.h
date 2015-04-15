
@interface UIKBSplitRow : NSObject {

    C _rowIndex;
    d _rowOffset;
    d _rowWidth;
    {CGSize="width"d"height"d} _defaultKeySize;
    @"NSMutableArray" _keys;
    @"NSMutableArray" _vacancies;
    @"NSDictionary" _hints;
    @"UIKBTree" _keylistLeft;
    @"UIKBTree" _geolistLeft;
    @"UIKBTree" _attrlistLeft;
    @"UIKBTree" _keylistRight;
    @"UIKBTree" _geolistRight;
    @"UIKBTree" _attrlistRight;
}
@property (nonatomic, assign, readwrite) NSNumber* rowIndex;
@property (atomic, assign, readwrite) NSNumber* rowOffset;
@property (atomic, assign, readwrite) NSNumber* rowWidth;
@property (atomic, assign, readwrite) NSNumber* defaultKeySize;
@property (atomic, assign, readonly) NSMutableArray* keys;
@property (atomic, retain, readwrite) NSDictionary* hints;

 - (id) description;
 - (void) dealloc;
 - (id) keyAtIndex:(i)a;
 - (C) rowIndex;
 - (id) keys;
 - (void) setRowIndex:(C)a;
 - (void) setHints:(id)a;
 - (void) addKey:(id)a;
 - (id) listOfType:(i)aleft:(BOOL)b;
 - (d) rowOffset;
 - (void) setRowOffset:(d)a;
 - (d) rowWidth;
 - (void) setRowWidth:(d)a;
 - ({CGSize=dd}) defaultKeySize;
 - (void) setDefaultKeySize:({CGSize=dd})a;
 - (id) hints;
 - (id) init;


@end
