
@interface _UIFlowLayoutRow : NSObject {

    @"NSMutableArray" _items;
    @"_UIFlowLayoutSection" _section;
    {CGSize="width"d"height"d} _rowSize;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rowFrame;
    q _index;
    BOOL _isValid;
    BOOL _complete;
    i _verticalAlignement;
    i _horizontalAlignement;
    d _availableSpace;
    BOOL _fixedItemSize;
}
@property (nonatomic, assign, readwrite) _UIFlowLayoutSection* section;
@property (nonatomic, assign, readwrite) NSNumber* rowSize;
@property (nonatomic, assign, readwrite) NSNumber* rowFrame;
@property (nonatomic, assign, readwrite) NSNumber* index;
@property (nonatomic, assign, readonly) NSMutableArray* items;
@property (nonatomic, assign, readwrite) NSNumber* complete;
@property (nonatomic, assign, readwrite) NSNumber* fixedItemSize;
@property (nonatomic, assign, readwrite) NSNumber* availableSpace;

 - (void) dealloc;
 - (void) invalidate;
 - (id) section;
 - (id) snapshot;
 - (id) items;
 - (q) index;
 - ({CGSize=dd}) rowSize;
 - (void) setRowSize:({CGSize=dd})a;
 - (BOOL) fixedItemSize;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rowFrame;
 - (void) setFixedItemSize:(BOOL)a;
 - (void) setSection:(id)a;
 - (void) addItem:(id)aatEnd:(BOOL)b;
 - (void) setComplete:(BOOL)a;
 - (void) layoutRow;
 - (void) setRowFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (q) indexOfNearestItemAtPoint:({CGPoint=dd})a;
 - (id) copyFromSection:(id)a;
 - (BOOL) complete;
 - (void) insertItem:(id)aatIndex:(q)b;
 - (void) removeItemAtIndex:(q)a;
 - (d) availableSpace;
 - (void) setAvailableSpace:(d)a;
 - (id) init;
 - (void) setIndex:(q)a;


@end
