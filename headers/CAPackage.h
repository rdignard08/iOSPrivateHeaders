
@interface CAPackage : NSObject {

    ^{_CAPackageData=@@@BB@@} _data;
}
@property (atomic, assign, readonly) CALayer* rootLayer;
@property (atomic, assign, readonly, getter=isGeometryFlipped) NSNumber* geometryFlipped;
 + (id) packageWithData:(id)atype:(id)boptions:(id)cerror:(^@)d;
 + (id) packageWithContentsOfURL:(id)atype:(id)boptions:(id)cerror:(^@)d;

 - (id) unarchiver:(id)a didDecodeObject:(id)b ;
 - (Class) unarchiver:(id)a cannotDecodeObjectOfClassName:(id)b originalClasses:(id)c ;
 - (void) dealloc;
 - (id) publishedObjectWithName:(id)a ;
 - (void) foreachLayer:(@?)a ;
 - (BOOL) isGeometryFlipped;
 - (id) _initWithContentsOfURL:(id)a type:(id)b options:(id)c error:(^@)d ;
 - (id) _initWithData:(id)a type:(id)b options:(id)c error:(^@)d ;
 - (void) _readFromCAMLURL:(id)a type:(id)b options:(id)c error:(^@)d ;
 - (void) _readFromArchiveData:(id)a options:(id)b error:(^@)c ;
 - (void) _readFromCAMLData:(id)a type:(id)b options:(id)c error:(^@)d ;
 - (id) substitutedClasses;
 - (void) _addClassSubstitutions:(id)a ;
 - (id) rootLayer;
 - (id) publishedObjectNames;
 - (Class) CAMLParser:(id)a didFailToFindClassWithName:(id)b ;
 - (id) CAMLParser:(id)a resourceForURL:(id)b ;
 - (void) CAMLParser:(id)a didLoadResource:(id)b fromURL:(id)c ;


@end
