//
//  DataManager.h
//  Timetable
//
//  Created by 黄亚州 on 2017/8/14.
//  Copyright © 2017年 黄亚州. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface DataManager : NSObject

+ (instancetype)sharedManager;

#pragma mark - NSManagedObjectContext Methods

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

/**
 *  @description 存储数据库文件的路径
 */
- (NSURL *)applicationDatabaseDirectory;

/**
 *  @description 立即保存数据库数据，该操作一般会自动进行，如果需要马上将数据写入到数据库的时候，调用此方法
 */
- (void)saveContext;

/**
 *  @description 从数据库中获取数据
 *  @param entityName 将要访问的实体名称，对应数据库的表格名称
 *  @param predicate 查询条件，用于过滤数据
 *  @param num 限定返回结果的数量（基于查询条件，以及起始偏移量和排序方法）
 *  @param offset 排序状况下返回结果的起始点
 *  @param sortDescriptors 排序方法
 *  @return 表格数据
 */
- (NSArray *)arrayFromCoreData:(NSString *)entityName
                     predicate:(NSPredicate *)predicate
                      limitNum:(NSUInteger)num
                        offset:(NSUInteger)offset
                       orderBy:(NSArray *)sortDescriptors;

/**
 *  @description 向数据库中插入一条数据
 *  @param entityName 将要访问的实体名称，对应数据库的表格名称
 *  @return 返回的实体对象引用
 */
- (NSManagedObject *)insertIntoCoreData:(NSString *)entityName;


/**
 *  @description 删除指定的数据
 *  @param obj 要删除的实体对象引用
 */
- (void)deleteFromCoreData:(NSManagedObject *)obj;

/**
 *  @abstract 将指定的数据表格清空
 *  @param entityName 要删除的数据表格名
 */
- (void)cleanCoreDatabyEntityName:(NSString*)entityName;

@end
