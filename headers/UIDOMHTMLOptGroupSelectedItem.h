
@protocol UIWebSelectedItemPrivate;
@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate> {

    DOMHTMLOptGroupElement* _node;
}
@property (nonatomic, retain, readwrite) DOMHTMLOptGroupElement* _node;

 - (void) dealloc;
 - (void) setSelected:(BOOL)a ;
 - (BOOL) selected;
 - (void) set_node:(id)a ;
 - (id) node;
 - (BOOL) isGroup;
 - (void) unselect;
 - (id) _node;
 - (id) initWithHTMLOptGroupNode:(id)a ;


@end
