
@interface CAMLWriter : NSObject {

    ^{_CAMLWriterPriv=^{__CFData}^{__CFURL}@^{_CAMLWriterElement}^{__CFString}^{__CFSet}ib1b1b1} _priv;
}
@property (atomic, retain, readwrite) NSURL* baseURL;
@property (atomic, weak, readwrite) NSNumber* delegate;
 + (id) writerWithData:(id)a;

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (id) baseURL;
 - (void) encodeObject:(id)a ;
 - (id) delegate;
 - (id) initWithData:(id)a ;
 - (void) setElementAttribute:(id)a forKey:(id)b ;
 - (void) beginPropertyElement:(id)a ;
 - (void) endElement;
 - (void) beginElement:(unsigned int)a ;
 - (void) setElementContent:(id)a ;
 - (id) URLStringForResource:(id)a ;
 - (void) setBaseURL:(id)a ;
 - (void) _writeElementTree:(^{_CAMLWriterElement=^{_CAMLWriterElement}^{_CAMLWriterElement}^{_CAMLWriterElement}^^{_CAMLWriterElement}^v^{__CFString}^{_CAMLWriterAttribute}^^{_CAMLWriterAttribute}^{__CFString}I})a ;


@end
