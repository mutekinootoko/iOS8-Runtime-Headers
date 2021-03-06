/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSArray, ML3Predicate, NSString, ML3AggregateQuery, ML3MusicLibrary;

@interface ML3Query : NSObject <NSCoding> {
    ML3MusicLibrary *_library;
    Class _entityClass;
    ML3Predicate *_predicate;
    NSArray *_orderingTerms;
    NSString *_propertyToCount;
    ML3AggregateQuery *_nonDirectAggregateQuery;
    bool_usingSections;
    bool_ignoreSystemFilterPredicates;
    bool_filtersOnDynamicProperties;
}

@property(readonly) ML3MusicLibrary * library;
@property(readonly) Class entityClass;
@property(readonly) ML3Predicate * predicate;
@property(readonly) ML3Predicate * predicateIncludingSystemwidePredicates;
@property(readonly) NSArray * orderingTerms;
@property(readonly) NSString * propertyToCount;
@property(readonly) bool hasEntities;
@property(readonly) long long anyEntityPersistentID;
@property(readonly) unsigned long long countOfEntities;
@property(readonly) ML3AggregateQuery * nonDirectAggregateQuery;
@property(readonly) NSString * sectionProperty;
@property(readonly) bool usingSections;
@property bool ignoreSystemFilterPredicates;
@property(readonly) NSString * selectPersistentIDsSQL;
@property(readonly) NSString * selectCountSQL;
@property(readonly) NSString * persistentIDProperty;
@property(readonly) bool filtersOnDynamicProperties;


- (Class)entityClass;
- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (bool)filtersOnDynamicProperties;
- (id)countStatementParameters;
- (id)selectCountSQL;
- (id)selectPersistentIDsSQL;
- (id)selectUnorderedPersistentIDsSQL;
- (id)lowerBoundParametersForOrderingTerms:(id)arg1 lowerBoundPersistentID:(long long)arg2;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(bool)arg5;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2;
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(bool)arg2 usingBlock:(id)arg3;
- (void)enumeratePersistentIDsAndSectionsWithProperty:(id)arg1 usingBlock:(id)arg2;
- (bool)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 usingConnection:(id)arg2;
- (bool)deleteAllEntitiesFromLibrary;
- (long long)anyEntityPersistentID;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 distinct:(bool)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 distinct:(bool)arg3;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(bool)arg2 distinct:(bool)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3;
- (bool)sectionsPersistentIDColumnIsDistinct;
- (id)persistentIDProperty;
- (id)predicateIncludingSystemwidePredicates;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(bool)arg5 distinct:(bool)arg6 limit:(unsigned long long)arg7;
- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(bool)arg2;
- (id)nameOrderPropertyForProperty:(id)arg1;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(bool)arg2 sectionProperty:(id)arg3 cancelBlock:(id)arg4 usingBlock:(id)arg5;
- (id)sectionsParameters;
- (id)sectionProperty;
- (id)selectSectionsSQL;
- (bool)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1;
- (void)enumerateSectionsUsingBlock:(id)arg1;
- (unsigned long long)countOfDistinctRowsForColumn:(id)arg1;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2;
- (bool)hasRowForColumn:(id)arg1;
- (id)persistentIDParameters;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned long long)arg3;
- (void)loadNamesFromLibrary:(id)arg1 onConnection:(id)arg2 forPredicate:(id)arg3 loadAllNames:(bool)arg4 cancelHandler:(id)arg5;
- (bool)usingSections;
- (id)propertyToCount;
- (id)nonDirectAggregateQuery;
- (id)orderingTerms;
- (void)setIgnoreSystemFilterPredicates:(bool)arg1;
- (id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 usingSections:(bool)arg5 nonDirectAggregateQuery:(id)arg6 propertyToCount:(id)arg7;
- (bool)ignoreSystemFilterPredicates;
- (bool)hasEntities;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(id)arg2;
- (unsigned long long)countOfEntities;
- (id)library;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(bool)arg2 cancelBlock:(id)arg3 usingBlock:(id)arg4;
- (id)sections;
- (id)predicate;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
