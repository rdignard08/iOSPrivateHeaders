
@interface UIStoryboardShowSegue : UIStoryboardSegue {

    SEL _action;
}

 - (SEL) action;
 - (void) setAction:(SEL)a ;
 - (void) perform;


@end
