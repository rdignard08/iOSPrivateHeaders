
@interface _UIFlowLayoutItem : NSObject {

    _UIFlowLayoutSection* _section;
    _UIFlowLayoutRow* _rowObject;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _itemFrame;
    positionEstimated* _itemFlags;
}
@property (nonatomic, assign, readwrite) _UIFlowLayoutSection* section;
@property (nonatomic, assign, readwrite) _UIFlowLayoutRow* rowObject;
@property (nonatomic, assign, readwrite) NSNumber* itemFrame;
@property (nonatomic, assign, readwrite, getter=isPositionEstimated) NSNumber* positionEstimated;

 - (id) copy;
 - (id) section;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) itemFrame;
 - (void) setItemFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) rowObject;
 - (BOOL) isPositionEstimated;
 - (void) setPositionEstimated:(BOOL)a;
 - (void) setSection:(id)a;
 - (void) setRowObject:(id)a;


@end
