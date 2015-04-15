
@protocol UIFormPeripheral;
@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral> {

    DOMHTMLSelectElement* _selectionNode;
    <UIWebFormControl>* _selectControl;
}
@property (nonatomic, retain, readwrite) DOMHTMLSelectElement* _selectionNode;
@property (nonatomic, retain, readwrite) NSNumber* _selectControl;
 + (id) createPeripheralWithDOMHTMLSelectElement:(id)a;

 - (void) dealloc;
 - (void) beginEditing;
 - (void) endEditing;
 - (void) set_selectionNode:(id)a ;
 - (id) _selectionNode;
 - (void) set_selectControl:(id)a ;
 - (id) initWithDOMHTMLSelectElement:(id)a ;
 - (id) assistantView;
 - (id) _selectControl;


@end
