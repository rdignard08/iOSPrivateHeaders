
@protocol NSCoding;
@interface NSFileWrapper : NSObject <NSCoding> {

    NSDictionary* _fileAttributes;
    NSString* _preferredFileName;
    NSString* _fileName;
    id _contents;
    id _icon;
    id _moreVars;
}
@property (atomic, assign, readonly, getter=isDirectory) NSNumber* directory;
@property (atomic, assign, readonly, getter=isRegularFile) NSNumber* regularFile;
@property (atomic, assign, readonly, getter=isSymbolicLink) NSNumber* symbolicLink;
@property (atomic, copy, readwrite) NSString* preferredFilename;
@property (atomic, copy, readwrite) NSString* filename;
@property (atomic, copy, readwrite) NSDictionary* fileAttributes;
@property (atomic, copy, readonly) NSData* serializedRepresentation;
@property (atomic, copy, readonly) NSDictionary* fileWrappers;
@property (atomic, copy, readonly) NSData* regularFileContents;
@property (atomic, copy, readonly) NSURL* symbolicLinkDestinationURL;
 + (id) _pathForURL:(id)areading:(BOOL)berror:(^@)c;
 + (BOOL) _canSafelyMapFilesAtPath:(id)a;
 + (BOOL) _forPath:(id)agetItemKind:(^@)bmodificationDate:(^@)c;
 + (id) _newContentsAtURL:(id)apath:(id)bitemKind:(id)coldChildrenByUniqueFileName:(id)doptions:(unsigned long long)eerror:(^@)f;
 + (id) _temporaryDirectoryURLForWritingToURL:(id)aerror:(^@)b;
 + (BOOL) _finishWritingToURL:(id)abyTakingContentsFromItemAtURL:(id)baddingAttributes:(id)cusingTemporaryDirectoryAtURL:(id)dbackupFileName:(id)eerror:(^@)f;
 + (BOOL) _finishWritingToURL:(id)abyMovingItemAtURL:(id)baddingAttributes:(id)cerror:(^@)d;
 + (void) _removeTemporaryDirectoryAtURL:(id)a;
 + (void) _writeAttributes:(id)atoURL:(id)b;
 + (void) initialize;

 - (BOOL) isDirectory;
 - (id) fileAttributes;
 - (id) _init;
 - (BOOL) _readContentsFromURL:(id)a path:(id)b itemKind:(id)c options:(unsigned long long)d error:(^@)e ;
 - (id) preferredFilename;
 - (void) setPreferredFilename:(id)a ;
 - (id) _addChild:(id)a forUniqueFileName:(id)b ;
 - (void) _initDirectoryContents;
 - (id) _initWithImpl:(id)a preferredFileName:(id)b uniqueFileName:(id)c docInfo:(id)d iconData:(id)e ;
 - (void) _removeParent:(id)a ;
 - (id) fileWrappers;
 - (void) removeFileWrapper:(id)a ;
 - (id) addFileWrapper:(id)a ;
 - (void) _observePreferredFileNameOfChild:(id)a ;
 - (BOOL) isRegularFile;
 - (BOOL) isSymbolicLink;
 - (BOOL) _matchesItemKind:(id)a modificationDate:(id)b ;
 - (BOOL) matchesContentsOfURL:(id)a ;
 - (BOOL) readFromURL:(id)a options:(unsigned long long)b error:(^@)c ;
 - (void) _removeChild:(id)a forUniqueFileName:(id)b ;
 - (void) setFileAttributes:(id)a ;
 - (id) filename;
 - (BOOL) writeToURL:(id)a options:(unsigned long long)b originalContentsURL:(id)c error:(^@)d ;
 - (void) _forWritingToURL:(id)a returnContentsLazyReadingError:(^@)b ;
 - (id) regularFileContents;
 - (id) symbolicLinkDestinationURL;
 - (void) setFilename:(id)a ;
 - (void) _updateDescendantFileNames;
 - (BOOL) _writeContentsToURL:(id)a path:(id)b originalContentsURL:(id)c tryHardLinking:(BOOL)d didHardLinking:(^B)e error:(^@)f ;
 - (id) _attributesToWrite;
 - (id) _newImpl;
 - (void) _addParent:(id)a ;
 - (id) keyForFileWrapper:(id)a ;
 - (void) _resetFileModificationDate;
 - (id) _uniqueFileNameOfChild:(id)a ;
 - (id) serializedRepresentation;
 - (id) initWithSerializedRepresentation:(id)a ;
 - (id) initSymbolicLinkWithDestinationURL:(id)a ;
 - (id) _fullDescription:(BOOL)a ;
 - (void) dealloc;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithURL:(id)a options:(unsigned long long)b error:(^@)c ;
 - (id) initRegularFileWithContents:(id)a ;
 - (id) initDirectoryWithFileWrappers:(id)a ;
 - (id) addRegularFileWithContents:(id)a preferredFilename:(id)b ;


@end
