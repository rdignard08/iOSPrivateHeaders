
@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer {

    BOOL _failWhenTappingInBars;
    long long _tapCategory;
}

 - (id) description;
 - (void) setDelegate:(id)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (long long) tapCategory;
 - (long long) _categoryForTapLocation:({CGPoint=dd})a;
 - (BOOL) failWhenTappingInBars;
 - (void) setFailWhenTappingInBars:(BOOL)a;
 - (void) _setDelegate:(id)a;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
