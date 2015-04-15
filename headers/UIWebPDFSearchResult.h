
@interface UIWebPDFSearchResult : NSObject {

    @"NSArray" rotationAngles;
    Q pageIndex;
    @"NSArray" strings;
    @"NSString" string;
    @"NSArray" rects;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} boundingBox;
}
@property (nonatomic, assign, readwrite) NSNumber* pageIndex;
@property (nonatomic, retain, readwrite) NSString* string;
@property (nonatomic, assign, readwrite) NSNumber* boundingBox;
@property (nonatomic, retain, readwrite) NSArray* strings;
@property (nonatomic, retain, readwrite) NSArray* rects;
@property (nonatomic, retain, readwrite) NSArray* rotationAngles;

 - (id) description;
 - (void) dealloc;
 - (id) string;
 - (void) setString:(id)a;
 - (void) setStrings:(id)a;
 - (id) strings;
 - (void) setRects:(id)a;
 - (id) rects;
 - (id) rotationAngles;
 - (Q) pageIndex;
 - (void) setRotationAngles:(id)a;
 - (void) setPageIndex:(Q)a;
 - (void) setBoundingBox:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingBox;


@end
