
@protocol NSCopying;
@interface _UICollectionViewItemKey : NSObject <NSCopying> {

    @"NSIndexPath" _indexPath;
    @"NSString" _identifier;
    BOOL _isClone;
    Q _type;
}
@property (nonatomic, assign, readonly) NSNumber* type;
@property (nonatomic, retain, readonly) NSIndexPath* indexPath;
@property (nonatomic, retain, readonly) NSString* identifier;
@property (nonatomic, assign, readonly) NSNumber* isClone;
 + (id) collectionItemKeyForCellWithIndexPath:(id)a;
 + (id) collectionItemKeyForSupplementaryViewOfKind:(id)aandIndexPath:(id)b;
 + (id) collectionItemKeyForDecorationViewOfKind:(id)aandIndexPath:(id)b;
 + (id) collectionItemKeyForLayoutAttributes:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) indexPath;
 - (id) initWithType:(Q)aindexPath:(id)bidentifier:(id)c;
 - (id) initWithType:(Q)aindexPath:(id)bidentifier:(id)cclone:(BOOL)d;
 - (BOOL) isClone;
 - (id) copyAsClone:(BOOL)a;
 - (Q) type;
 - (id) identifier;


@end
