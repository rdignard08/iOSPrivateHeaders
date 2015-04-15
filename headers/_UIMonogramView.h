
@interface _UIMonogramView : UIView {

    NSString* _name;
    NSString* _monogram;
    UILabel* _label;
}

 - (id) name;
 - (void) layoutSubviews;
 - (void) setLabel:(id)a;
 - (id) monogramForName:(id)a;
 - (void) setMonogram:(id)a;
 - (id) monogram;
 - (id) labelForMonogram:(id)a;
 - (void) setName:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) label;


@end
