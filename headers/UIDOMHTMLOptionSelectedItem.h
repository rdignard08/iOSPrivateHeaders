
@protocol UIWebSelectedItemPrivate;
@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {

    BOOL _selected;
    DOMHTMLOptionElement* _node;
}
@property (nonatomic, retain, readwrite) DOMHTMLOptionElement* _node;

 - (void) dealloc;
 - (void) setSelected:(BOOL)a;
 - (BOOL) selected;
 - (void) set_node:(id)a;
 - (id) node;
 - (BOOL) isGroup;
 - (void) unselect;
 - (id) initWithHTMLOptionNode:(id)a;
 - (id) _node;


@end
