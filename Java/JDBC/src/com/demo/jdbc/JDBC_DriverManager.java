package com.demo.jdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;


public class JDBC_DriverManager {
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

        // 4. 获取执行sql对象
        Statement stmt = conn.createStatement();

        // 5. 执行SQL
        int count1 = stmt.executeUpdate(sql1);

        // 6. 处理结果
        System.out.println(count1);

        // 7. 释放资源
        stmt.close();
        conn.close();
    }
}