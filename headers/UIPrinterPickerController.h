
@interface UIPrinterPickerController : NSObject {

    @? _completionHandler;
    id _state;
    UIPrinter* _selectedPrinter;
    <UIPrinterPickerControllerDelegate>* _delegate;
}
@property (nonatomic, retain, readwrite) UIPrinter* selectedPrinter;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
 + (id) printerPickerControllerWithInitiallySelectedPrinter:(id)a;

 - (id) _init;
 - (Vv) release;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) _printerPickerDidPresent;
 - (void) _printerPickerWillDismiss;
 - (void) _printerPickerDidDismiss;
 - (void) dismissAnimated:(BOOL)a ;
 - (BOOL) _delegateFiltersPrinters;
 - (BOOL) _shouldShowPrinter:(id)a ;
 - (void) setSelectedPrinter:(id)a ;
 - (BOOL) presentFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inView:(id)b animated:(BOOL)c completionHandler:(@?)d ;
 - (BOOL) _setupPickerPanel:(@?)a ;
 - (BOOL) presentAnimated:(BOOL)a completionHandler:(@?)b ;
 - (id) selectedPrinter;
 - (BOOL) presentFromBarButtonItem:(id)a animated:(BOOL)b completionHandler:(@?)c ;
 - (id) init;
 - (id) delegate;


@end
