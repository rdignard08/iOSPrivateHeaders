
@interface UIPrintPaper : NSObject {

    int _paperOrientation;
    id _internal;
}
@property (atomic, assign, readonly) NSNumber* paperSize;
@property (atomic, assign, readonly) NSNumber* printableRect;
 + (id) bestPaperForPageSize:({CGSize=dd})aandContentType:(long long)bwithPapersFromArray:(id)c;
 + (id) _defaultPaperForOutputType:(long long)a;
 + (id) _defaultPKPaperForOuptutType:(long long)a;
 + (id) bestPaperForPageSize:({CGSize=dd})awithPapersFromArray:(id)b;
 + (id) _readyPaperListForPrinter:(id)awithDuplexMode:(long long)bforContentType:(long long)ccontentSize:({CGSize=dd})d;
 + (id) _defaultPaperListForOutputType:(long long)a;

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
 - (void) _setPaperOrientation:(int)a;
 - (int) _paperOrientation;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) printRect;
 - ({CGSize=dd}) paperSize;


@end
