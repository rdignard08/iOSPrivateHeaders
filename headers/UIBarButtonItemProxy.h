
@interface UIBarButtonItemProxy : NSObject {

    UIBarButtonItem* _item;
    UIView* _view;
}

 - (id) item;
 - (void) dealloc;
 - (id) initWithItem:(id)a inToolbar:(id)b ;
 - (id) view;


@end
