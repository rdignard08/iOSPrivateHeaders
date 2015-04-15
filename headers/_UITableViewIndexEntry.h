
@interface _UITableViewIndexEntry : NSObject {

    @"UIImage" _image;
    id _line;
    {CGPoint="x"d"y"d} _baselinePoint;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _bounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _typeBounds;
}
@property (nonatomic, retain, readwrite) UIImage* image;
@property (nonatomic, retain, readwrite) NSNumber* line;
@property (nonatomic, assign, readwrite) NSNumber* bounds;
@property (nonatomic, assign, readwrite) NSNumber* typeBounds;
@property (nonatomic, assign, readwrite) NSNumber* baselinePoint;

 - (id) description;
 - (void) dealloc;
 - (void) setLine:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) typeBounds;
 - ({CGPoint=dd}) baselinePoint;
 - (id) line;
 - (void) setTypeBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBaselinePoint:({CGPoint=dd})a;
 - (void) setImage:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) image;


@end
