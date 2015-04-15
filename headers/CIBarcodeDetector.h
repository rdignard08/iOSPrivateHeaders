
@interface CIBarcodeDetector : CIDetector {

    @"CIContext" context;
    d _width;
    d _height;
    @"NSMutableDictionary" featureOptions;
}

 - (void) setContext:(id)a;
 - (id) featuresInImage:(id)aoptions:(id)b;
 - (id) initWithContext:(id)aoptions:(id)b;
 - (id) featuresInImage:(id)a;
 - (id) context;


@end
