
@protocol UITableViewDataSource;
@interface _UIFilteredDataSource : NSObject <UITableViewDataSource> {

    BOOL _limitingWithSections;
    long long _maxVisibleSection;
    long long _numberOfVisibleItemsInLastSection;
    long long _filterType;
    <UITableViewDataSource>* _tableDataSource;
}
@property (nonatomic, assign, readwrite) NSNumber* filterType;
@property (nonatomic, assign, readwrite) NSNumber* tableDataSource;

 - (BOOL) respondsToSelector:(SEL)a;
 - (id) forwardingTargetForSelector:(SEL)a;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (long long) filterType;
 - (void) setTableDataSource:(id)a;
 - (void) setFilterType:(long long)a;
 - (id) tableDataSource;
 - (long long) _filteredNumberOfItemsGivenSection:(long long)anumberOfItems:(long long)b;


@end
