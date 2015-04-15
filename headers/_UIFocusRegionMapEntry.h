
@protocol NSSecureCoding;
@interface _UIFocusRegionMapEntry : NSObject <NSSecureCoding> {

    UIView* _associatedView;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _frame;
}
@property (nonatomic, assign, readwrite) NSNumber* frame;
@property (nonatomic, retain, readwrite) UIView* associatedView;
 + (BOOL) supportsSecureCoding;

 - (id) description;
 - (void) dealloc;
 - (void) setAssociatedView:(id)a ;
 - (id) associatedView;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
