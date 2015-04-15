
@interface UITabBarItemProxy : NSObject {

    UITabBarItem* _item;
    UIView* _view;
}

 - (id) item;
 - (void) dealloc;
 - (void) setSelected:(BOOL)a ;
 - (id) initWithItem:(id)a inTabBar:(id)b ;
 - (id) view;


@end
