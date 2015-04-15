
@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer {

    BOOL _failWhenTappingInBars;
    long long _tapCategory;
}

 - (id) description;
 - (void) setDelegate:(id)a ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (long long) tapCategory;
 - (long long) _categoryForTapLocation:({CGPoint=dd})a ;
 - (BOOL) failWhenTappingInBars;
 - (void) setFailWhenTappingInBars:(BOOL)a ;
 - (void) _setDelegate:(id)a ;
 - (id) initWithTarget:(id)a action:(SEL)b ;


@end
