
@protocol NSCopying, NSCoding;
@interface UIPrintInfo : NSObject <NSCopying, NSCoding> {

    @"NSString" _printerID;
    @"NSString" _jobName;
    q _outputType;
    q _orientation;
    q _duplex;
    q _copies;
    BOOL _scaleUp;
}
@property (nonatomic, copy, readwrite) NSString* printerID;
@property (nonatomic, copy, readwrite) NSString* jobName;
@property (nonatomic, assign, readwrite) NSNumber* outputType;
@property (nonatomic, assign, readwrite) NSNumber* orientation;
@property (nonatomic, assign, readwrite) NSNumber* duplex;
@property (nonatomic, assign, readwrite) NSNumber* scaleUp;
@property (nonatomic, assign, readwrite) NSNumber* copies;
 + (id) printInfo;
 + (id) printInfoWithDictionary:(id)a;

 - (id) dictionaryRepresentation;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) setJobName:(id)a;
 - (void) setOutputType:(q)a;
 - (id) _initWithDictionary:(id)a;
 - (void) setPrinterID:(id)a;
 - (void) _updateWithPrinter:(id)a;
 - (id) _createPrintSettingsForPrinter:(id)a;
 - (id) printerID;
 - (id) jobName;
 - (q) outputType;
 - (q) duplex;
 - (void) setDuplex:(q)a;
 - (q) copies;
 - (void) setCopies:(q)a;
 - (BOOL) scaleUp;
 - (void) setScaleUp:(BOOL)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (q) orientation;
 - (void) setOrientation:(q)a;


@end
