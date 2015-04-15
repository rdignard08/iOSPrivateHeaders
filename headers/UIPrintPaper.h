
@interface UIPrintPaper : NSObject {

    i _paperOrientation;
    id _internal;
}
@property (atomic, assign, readonly) NSNumber* paperSize;
@property (atomic, assign, readonly) NSNumber* printableRect;
 + (id) bestPaperForPageSize:({CGSize=dd})aandContentType:(q)bwithPapersFromArray:(id)c;
 + (id) _defaultPaperForOutputType:(q)a;
 + (id) _defaultPKPaperForOuptutType:(q)a;
 + (id) bestPaperForPageSize:({CGSize=dd})awithPapersFromArray:(id)b;
 + (id) _readyPaperListForPrinter:(id)awithDuplexMode:(q)bforContentType:(q)ccontentSize:({CGSize=dd})d;
 + (id) _defaultPaperListForOutputType:(q)a;

 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (id) _pkPaper;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) printableRect;
 - (void) _updatePKPaper:(id)a;
 - (id) _initWithPrintKitPaper:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _printableRectForDuplex:(BOOL)a;
 - (id) _localizedName;
 - (id) _localizedMediaTypeName;
 - (void) _setPaperOrientation:(i)a;
 - (i) _paperOrientation;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) printRect;
 - ({CGSize=dd}) paperSize;


@end
