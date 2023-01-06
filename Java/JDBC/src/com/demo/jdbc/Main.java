package com.demo.jdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

/**
 * Connection: 获取执行SQL的对象
 * 1. 普通執行SQL對象
 *  Statement createStatement()
 * 2. 预编译SQL的执行SQL对象。防止SQL注入
 *  PrepareStatement prepareStatement(sql)
 * 3. 执行存储过程的对象
 *  CallableStatement prepareCall(sql)
 *
 *  事务管理
 *     开启事务：setAutoCommit(boolean autocommit) true为自动提交事务，false为手动提交事务，即为开启事务
 *     提交事务：commit()
 *     回滚事务：rollback()
 */

public class Main {
    public static void main(String[] args) throws Exception {
        // 1. 注册驱动, 5后面版本不需要注册
        // Class.forName("com.mysql.cj.jdbc.Driver");

        // 2. 获取连接
        String url = "jdbc:mysql://localhost:3306/test?useSSL=false&serverTimeZone=GMT";
        String username = "root";
        String password = "232330";
        Connection conn = DriverManager.getConnection(url, username, password);

        // 3. 定义SQL
        String sql1 = "update stu set age = 10 where name like '周安'";
        String sql2 = "update stu set age = 20 where name like '六百'";

        // 4. 获取执行sql对象
        Statement stmt = conn.createStatement();

        try {
            // 开启事务
            conn.setAutoCommit(false);

            // 5. 执行SQL
            int count1 = stmt.executeUpdate(sql1);
            System.out.println(count1);

            // int s = 3 / 0;
            int count2 = stmt.executeUpdate(sql2);

            // 6. 处理结果
            System.out.println(count2);

            // 提交事务
            conn.commit();
        } catch (Exception e) {
            // 回滚事务
            conn.rollback();

            throw new RuntimeException(e);
        }


        // 7. 释放资源
        stmt.close();
        conn.close();
    }
}